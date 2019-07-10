#include <bits/stdc++.h>
using namespace std;

char lab[112][112];
bool vis[112][112];
int n, m;

int dfs(int i, int j)
{
    if(i < 0 || i >= n)
        return 0;
    if(j < 0 || j >= m)
        return 0;
    if(vis[i][j])
        return 0;
    if(lab[i][j] == 'X')
        return 0;
    vis[i][j] = true;

    int count = 0;
    if(lab[i][j] == 'T') ++count;
    count += dfs(i+1, j);
    count += dfs(i-1, j);
    count += dfs(i, j+1);
    count += dfs(i, j-1);
    return count;
}

signed main()
{
    cin >> n >> m;
    
    int xstart, ystart;
    
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            cin >> lab[i][j];
            if(lab[i][j] == 'T')
            {
                xstart = i;
                ystart = j;
            }
        }
    }
    
    const char* pp[] = {
        "Tonho e o numero 1",
        "Dessa vez Tonho nao conseguiu",
    };
    
    cerr << xstart << ' ' << ystart << endl;
    cout << pp[dfs(xstart, ystart) != 3] << endl;
}