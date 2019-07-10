#include <bits/stdc++.h>
using namespace std;

int lab[1123][1123];
bool vis[1123][1123];
int n, m;

void dfs(int i, int j)
{
    if(i < 0 || i >= n) return;
    if(j < 0 || j >= m) return;
    if(vis[i][j]) return;
    if(lab[i][j] == 0) return;
    vis[i][j] = true;
    
    dfs(i, j+1);
    dfs(i, j-1);
    dfs(i-1, j);
    dfs(i+1, j);
    dfs(i-1, j-1);
    dfs(i-1, j+1);
    dfs(i+1, j-1);
    dfs(i+1, j+1);
}

signed main()
{
    cin >> n >> m;
    
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            cin >> lab[i][j];
        }
    }
    
    int ans = 0;
    
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            if(lab[i][j] == 0) continue;
            if(!vis[i][j]) ++ans;
            dfs(i, j);
        }
    }
    
    cout << ans << endl;
}