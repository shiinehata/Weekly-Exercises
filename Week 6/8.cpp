#include "bits/stdc++.h"
#define int long long 
#define ld long double

using namespace std;

int rnd1(long double x)
    {
        ld a = (int)(x);
        ld d = x - a;

        if (d >= 0.5) { return ceil(x); }
        else { return floor(x); }
    }

int rnd1(long double x)
    {
        ld a = (int)(x);
        ld d = x - a;

        if (d >= 0.5) { return a; }
        else { return a + 1; }
    }

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); 

    return 0;
}