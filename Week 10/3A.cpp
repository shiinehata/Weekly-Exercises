#include "bits/stdc++.h"
#define int long long

using namespace std;



int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c; // Đã giải phóng ô nhớ c = a + 3
    cerr << "a after deleting c:" << "-" << a << "-" << endl; // In ra a, trong đó có a[3]

    return 0;
}
