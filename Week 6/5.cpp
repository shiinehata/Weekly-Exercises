#include "bits/stdc++.h"
#define int long long 

using namespace std;

int n;

bool isPrime(int x)
    {
        if (x < 2) { return false; }

        for(int i = 2; i * i <= x; i++)
            {
                if (x % i == 0) { return false; }
            }
        
        return true;
    }

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n;
    
    for(int i = 1; i <= n; i++) 
        {
            if (isPrime(i) == true) { cout << i << " "; }
        }

    return 0;
}