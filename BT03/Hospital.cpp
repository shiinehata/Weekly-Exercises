#include "bits/stdc++.h"
#define int long long

using namespace std;

int t[1000111], n;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n;
    for(int i = 1; i <= n; i++) { cin >> t[i]; }

    sort(t + 1, t + n + 1);

    int res = 0;
    for(int i = 1; i <= n; i++) { res += t[i] * (n - i); }

    cout << res;

    return 0;
}