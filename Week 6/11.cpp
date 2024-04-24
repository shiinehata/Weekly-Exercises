#include "bits/stdc++.h"
#define int long long 

using namespace std;

string decToBin(int x)
    {
        string ans;
        while (x > 0)
            {
                ans += '0' + x % 2;
                x /= 2;
            }
        
        reverse(ans.begin(), ans.end());

        return ans;
    }

int binToDec(string x)
    {
        int ans = 0;
        for(char c : x)
            {
                c -= '0';

                if (c == 0) { ans *= 2; }
                else { ans *= 2; ans++; }
            }
        
        return ans;
    }

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    return 0;
}