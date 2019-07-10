#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
map<string, int> nametov;

int getv(const string& name)
{
    auto it = nametov.find(name);
    if(it != nametov.end())
        return it->second;
    nametov.emplace(name, g.size());
    g.emplace_back();
    return g.size() - 1;
}

signed main()
{
    string from_name, to_name;
    cin >> from_name >> to_name;
    
    const int from = getv(from_name);
    const int to = getv(to_name);
    
    string tmp;
    while(cin >> tmp)
    {
        const int sv = getv(tmp);
    
        int n;
        cin >> n;
        for(int i = 0; i < n; ++i)
        {
            cin >> tmp;
            g[sv].push_back(getv(tmp));
        }
    }
    
    vector<bool> vis(g.size());
    queue<int> q;
    q.push(from);
    while(!q.empty())
    {
        const int top = q.front(); q.pop();
        if(vis[top]) continue;
        vis[top] = true;
        
        if(top == to)
        {
            cout << "gol" << endl;
            return 0;
        }
        
        for(const auto x : g[top])
            q.push(x);
    }
    
    cout << "afasta a zaga" << endl;
}
