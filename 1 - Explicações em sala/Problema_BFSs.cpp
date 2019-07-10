#include <bits/stdc++.h>

using namespace std;

#define INF (1ll << 62)
#define pb push_back
#define ii pair<int,int>
#define OK cerr <<"OK"<< endl
#define debug(x) cerr << #x " = " << (x) << endl
#define int long long
#define ff first
#define ss second
#define tt tuple<int, int, int>

int n, m;
bool valid(int x, int y) {
  return (0 <= x && x < n && 0 <= y && y < m);
}

signed main () {
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n;
  m = n;

  char mat[n][m];

  int ttime[n][m];

  for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++) {
      cin >> mat[i][j];
      ttime[i][j] = -1;
    }

  ii s;

  cin >> s.ff >> s.ss;

  queue<ii> q;
  ii aux = s;
  q.push(aux);
  ttime[aux.ff][aux.ss] = 0;

  int dx[] = {1, -1, 0, 0, 1, -1, 1, -1};
  int dy[] = {0, 0, 1, -1, -1, 1, 1, -1};

  while(!q.empty()) {

    ii u = q.front();
    q.pop();

    for(int i = 0; i < 8; i++) {
      int nx = u.ff + dx[i], ny = u.ss + dy[i];
      if(!valid(nx, ny))
        continue;
      if(ttime[nx][ny] != -1 || mat[nx][ny] > mat[u.ff][u.ss])
        continue;
      ttime[nx][ny] = ttime[u.ff][u.ss] + 1;
      q.push(ii(nx, ny));
    }

  }

  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
      cout << setw(2) << setfill('0') << ttime[i][j] << " \n"[j+1 == n];


}
