// Calcular distância

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void BFS(int st, vector<vector<int>>& adj, vector<int>& dis)
{
      dis[x] = 0;
      queue<int> Q;
      dis[st] = 1;
      Q.push(st);
      while(!Q.empty())
      {
            int U = Q.front(); Q.pop();
            for(int V:adj[U])
            {
                  if(dis[V] > dis[U] + 1)
                  {
                    dis[V] = dis[U] + 1;
                    Q.push(V);
                  }
            }
      }

}
