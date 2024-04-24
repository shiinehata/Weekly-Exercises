#include "bits/stdc++.h"
#define int long long 

using namespace std;

int binarySearch(int* a, int n, int x)
    {
        int L = 0, R = n - 1;
        while (L <= R)
            {
                int mid = (L + R) >> 1;

                if (*(a + mid) == x) { return mid; }
                if (*(a + mid) < x) { L = mid + 1; }
                else { R = mid - 1; }
            }
        
        return -1;
    }

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    

    return 0;
}