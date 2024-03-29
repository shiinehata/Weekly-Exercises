#include "bits/stdc++.h"
#define int long long 

using namespace std;

struct info 
    {
        int x, y;
    };

int m, n;
char a[1111][1111];
bool visited[1111][1111];

bool survive = false;
void DFS(info u)
    {
        if (survive == true) { return; }

        if (u.x >= m) { survive = true; return; }

        if (visited[u.x][u.y] == true) { return; }
        visited[u.x][u.y] = true;

        // Move left
        if (u.y > 1)
            {
                if ((a[u.x][u.y-1] == 'E') && (a[u.x+1][u.y-1] == 'E')) { DFS({u.x+1, u.y-1}); }
            }
        
        // Move right
        if (u.y < n)
            {
                if ((a[u.x][u.y+1] == 'E') && (a[u.x+1][u.y+1] == 'E')) { DFS({u.x+1, u.y+1}); }
            }
        
        // Stay
        if (a[u.x+1][u.y] == 'E') { DFS({u.x+1, u.y}); }
    }

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n >> m;
    for(int i = 1; i <= m; i++) 
        for(int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        
    info start;
    for(int i = 1; i <= n; i++)
        {
            if (a[1][i] == 'Y') 
                {
                    start = {1, i};
                    break;
                }
        } 
    
    DFS(start);

    if (survive) { cout << "YES"; } else { cout << "NO"; }

    return 0;
}