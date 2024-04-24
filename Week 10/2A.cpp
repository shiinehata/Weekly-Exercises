#include "bits/stdc++.h"

using namespace std;

int32_t main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p; // Đã giải phóng bộ nhớ của p == p2 
    *p2 = 100; // Truy cập vào bộ nhớ đã bị giải phóng
    cout << *p2;
    delete p2;


    return 0;
}