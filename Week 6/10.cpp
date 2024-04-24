#include "bits/stdc++.h"
#define int long long 

using namespace std;

int a[511], n;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    srand(time(NULL));

    cin >> n;
    for(int i = 1; i <= n; i++) { a[i] = rand() % 50; }

    for(int i = 1; i <= n - 2; i++)
        for(int j = i + 1; j <= n - 1; j++)
            for(int k = j + 1; k <= n; k++)
                {
                    if ((a[i] + a[j] + a[k]) % 25 == 0) { cout << a[i] << " " << a[j] << " " << a[k] << '\n'; }
                }

    return 0;
}