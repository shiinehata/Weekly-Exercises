#include "bits/stdc++.h"
#define int long long 

using namespace std;

const int base = 311, mod = 1e9 + 7;

int n, m;
string s;

int Hash[100111], Pow[100111];
void buildPow()
    {
        Pow[0] = 1;
        for(int i = 1; i <= 100011; i++) { Pow[i] = (Pow[i-1] * base) % mod; }
    }

void buildHash()
    {
        Hash[0] = 0;
        for(int i = 1; i <= n; i++) { Hash[i] = (Hash[i-1] * base + s[i]) % mod; }
    }

int getHash(int L, int R)
    {
        return (Hash[R] - Hash[L-1] * Pow[R-L+1] + mod * mod) % mod; 
    }

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n >> m;
    cin >> s;
    s = ' ' + s;

    while (m--)
        {
            int L, R;
            cin >> L >> R;

            
        }

    return 0;
}