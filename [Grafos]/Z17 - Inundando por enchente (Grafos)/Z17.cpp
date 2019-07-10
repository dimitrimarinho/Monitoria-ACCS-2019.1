#include <bits/stdc++.h>
using namespace std;

int mat[1123][1123];
int ans[1123][1123];
bool vis[1123][1123];
int n;

signed main()
{
    memset(ans, -1, sizeof(ans));

    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cin >> mat[i][j];
        }
    }
    
    int xstart, ystart;
    cin >> xstart >> ystart;
    
    queue<tuple<int, int, int>> q;
    q.emplace(xstart, ystart, 0);
    while(!q.empty())
    {
        auto top = q.front(); q.pop();
        const auto topx = get<0>(top);
        const auto topy = get<1>(top);
        const auto topc = get<2>(top);
        
        if(vis[topx][topy])
            continue;
        vis[topx][topy] = true;
        ans[topx][topy] = topc;
        
        int dirx[] = { 0, 1, -1 }, diry[] = { 0, 1, -1 };
        for(int i = 0; i < 3; ++i)
        {
            for(int j = 0; j < 3; ++j)
            {
                int nextx = topx + dirx[i];
                int nexty = topy + diry[j];
                
                if(nextx < 0 || nextx >= n)
                    continue;
                if(nexty < 0 || nexty >= n)
                    continue;
                if(vis[nextx][nexty])
                    continue;
                if(mat[topx][topy] < mat[nextx][nexty])
                    continue;
                q.emplace(nextx, nexty, topc+1);
            }
        }
    }
    
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cout << setw(2) << setfill('0') << ans[i][j] << ' ';
        }
        cout << endl;
    }
}