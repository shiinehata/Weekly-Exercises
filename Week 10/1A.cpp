#include "bits/stdc++.h"
#define int long long 

using namespace std;

char* concat(const char* a, const char* b)
    {
        int sizeA = 0, sizeB = 0;
        while (*(a + sizeA) != '\0') { sizeA++; }
        while (*(b + sizeB) != '\0') { sizeB++; }

        char* c = new char [sizeA + sizeB + 1];

        for(int i = 0; i < sizeA; i++) { *(c + i) = *(a + i); }
        for(int i = 0; i < sizeB; i++) { *(c + sizeA + i) = *(b + i); }
        *(c + sizeA + sizeB) = '\0';

        return c;
    }

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cout << concat("Hello", "World!");

    return 0;
}