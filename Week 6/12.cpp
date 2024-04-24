#include "bits/stdc++.h"
#define int long long 

using namespace std;

int a[111], b[111], n;

int toHop(int k, int n)
    {
        int nFac = 1;
        for(int i = 1; i <= n; i++) { nFac *= i; }

        int kFac = 1;
        for(int i = 1; i <= k; i++) { kFac *= i; }

        int nkFac = 1;
        for(int i = 1; i <= n - k; i++) { nkFac *= i; }

        return nFac / (kFac * nkFac);
    }

int kiemTra(int k, int n)
    {
        if ((0 <= k) && (k <= n) && (1 <= n) && (n <= 20)) { return 1; }
        else { return 0; }
    }

void nhapKN(int k[], int n[], int *soPhanTu)
    {
        int i = 1;
        while (cin >> k[i] >> n[i])
            {
                if ((k[i] == -1) && (n[i] == -1)) { break; }
                i++;
            }
        
        *soPhanTu = i;
    }

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    nhapKN(a, b, &n);

    for(int i = 1; i <= n; i++) 
        { 
            if (kiemTra(a[i], b[i])) { cout << toHop(a[i], b[i]) << '\n'; }
        }

    return 0;
}