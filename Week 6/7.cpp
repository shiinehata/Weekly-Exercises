#include "bits/stdc++.h"
#define int long long 

using namespace std;

int row;

void draw(int m, int n)
    {
        for(int i = 1; i <= m; i++) { cout << ' '; }
        for(int i = 1; i <= n; i++) { cout << '*'; }
    }

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> row;

    int len = 1 + (row - 1) * 2;
    for(int i = 1; i <= row; i++) 
        { 
            draw((len - (1 + (i - 1) * 2)) / 2, 1 + (i - 1) * 2); 
            cout << '\n';
        }

    return 0;
}