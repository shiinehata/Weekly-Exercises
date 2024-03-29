#include "bits/stdc++.h"
#define int long long 

using namespace std;

int t[1000111], n;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n;
    for(int i = 1; i <= n; i++) { cin >> t[i]; }

    for(int i = 1; i <= n; i++)
        for(int j = i+1; j <= n; j++)
            {
                if (t[i] > t[j]) { swap(t[i], t[j]); }
            }
    
    int res = 0, waited = 0;
    for(int i = 1; i <= n; i++)
        {
            res += waited;
            waited += t[i];
        }
    
    cout << res;

    return 0;
}