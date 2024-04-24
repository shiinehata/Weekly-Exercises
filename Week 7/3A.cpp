#include "bits/stdc++.h"
#define int long long 

using namespace std;

int a[111], n;

int countEven(int* a, int n)
    {
        int ans = 0;
        for(int i = 0; i < n; i++)
            {
                if (*(a + i) % 2 == 0) { ans++; }
            }
        
        return ans; 
    }

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++) { cin >> a[i]; }

    cout << countEven(a, n);

    return 0;
}