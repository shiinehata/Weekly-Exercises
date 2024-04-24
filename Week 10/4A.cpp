#include "bits/stdc++.h"
#define int long long

using namespace std;



int32_t main()
{
    int a = 10;

    int* pA = &a;
    delete pA;

    cout << a; // Lỗi

    return 0;
}
