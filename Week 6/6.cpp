#include "bits/stdc++.h"
#define int long long 

using namespace std;

int gcd(int a, int b)
    {
        int r = b % a;
        while (r > 0)
            {
                r = a % b;
                a = b;
                b = r;
            }
        
        return a;
    }

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    

    return 0;
}