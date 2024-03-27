#include <bits/stdc++.h>
#define int long long

using namespace std;

/*
 * Complete the 'beautifulStrings' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts STRING s as parameter.
 */

long beautifulStrings(string s) 
{    
    s.push_back('@');

    int prev0 = 1, prev1 = 0, prev2 = 0;
    int curr0 = 0, curr1 = 0, curr2 = 0;
    int prevBlock, currBlock;
    char prev2Char, prev1Char, currChar;

    int n = 0, cnt = 1;
    currBlock = 1;
    for(int i = 1; i < s.length(); i++)
        {
            if (s[i] == s[i-1]) { cnt++; }
            else 
                {
                    // Reset curr
                    curr0 = 0;
                    curr1 = 0;
                    curr2 = 0;

                    // Update new block
                    n++;
                    currBlock = cnt;
                    currChar = s[i-1];
                    cnt = 1;

                    // No delete
                    curr0 += prev0;

                    // Delete 1
                    curr1 += prev0 + prev1;

                    // Delete 2
                    if ((currBlock >= 2) || (n >= 2))
                        {
                            if (currBlock >= 2) { curr2 += prev0; }
                            curr2 += prev1 + prev2;
                        }

                    if ((n >= 2) && (prevBlock == 1) && (prev2Char == currChar)) { curr2--; }

                    // Update curr to prev
                    prev0 = curr0;
                    prev1 = curr1;
                    prev2 = curr2;
                    prevBlock = currBlock;
                    prev2Char = prev1Char;
                    prev1Char = currChar;
                }
        }

    return curr2;
}

int32_t main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long result = beautifulStrings(s);

    fout << result << "\n";

    fout.close();

    return 0;
}