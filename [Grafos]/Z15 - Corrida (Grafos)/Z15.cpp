#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<bool> vis;

signed main()
{
    int n, m, d;
    cin >> n >> m >> d;
    
    g.resize(n);
    vis.resize(n);
    
    for(int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    
    int i, f;
    cin >> i >> f;
    
    queue<pair<int, int>> q;
    q.push(make_pair(i, 0));
    while(!q.empty())
    {
        auto top = q.front();
        q.pop();
        
        if(vis[top.first]) continue;
        vis[top.first] = true;
        
        if(top.first == f)
        {
            cout << d*top.second << endl;
            return 0;
        }
        
        for(const auto x : g[top.first])
            q.push(make_pair(x, top.second+1));
    }
}