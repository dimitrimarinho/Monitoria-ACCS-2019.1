#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void BFS(int st, vector<vector<int>>& adj, vector<int>& vis)
{
      vis[x] = 1
      queue<int> Q;
      vis[st] = 1;
      Q.push(st);
      while(!Q.empty())
      {
            int U = Q.front(); Q.pop();
            for(int V:adj[U])
            {
                  if(!vis[V])
                  {
                    vis[V] = 1;
                    Q.push(V);
                  }
            }
      }

}
