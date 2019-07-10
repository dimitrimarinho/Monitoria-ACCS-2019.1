#include <bits/stdc++.h>
using namespace std;

bool has_cycle(const vector<vector<int>>& g, vector<bool>& vis, int start)
{
    queue<pair<int, int>> q;
    q.push(make_pair(start, -1));
    while(!q.empty())
    {
        const auto top = q.front(); q.pop();
        if(vis[top.first]) return true;
        vis[top.first] = true;
        
        for(const auto x : g[top.first])
        {
            if(x != top.second && !vis[x])
                q.push(make_pair(x, top.first));
        }
    }
    return false;
}

signed main()
{
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> g(n);
    for(int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    
    vector<bool> vis(n);
    
    for(int i = 0; i < n; ++i)
    {
        if(!vis[i] && has_cycle(g, vis, i))
        {
            cout << "SIM" << endl;
            return 0;
        }
    }
    
    cout << "NAO" << endl;
}
