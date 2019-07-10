#include <bits/stdc++.h>
using namespace std;

int p, m, n;
vector<int> we;
int memo[60][105];

int knapsack(int i, int w)
{
    if(w <= p)
        return 0;
    if(i >= n)
        return 0;
    if(memo[i][w] != -1)
        return memo[i][w];
    
    int best = knapsack(i+1, w);
    
    if(w - p - we[i] >= 0)
        best = max(best, 1 + knapsack(i+1, w - we[i]));
    
    memo[i][w] = best;
    return best;
}

signed main()
{
    cin >> p >> m >> n;
    
    memset(memo, -1, sizeof(memo));
    
    we.resize(n+1);
    for(int i = 0; i < n; ++i)
        cin >> we[i];
        
    cout << knapsack(0, m) << endl;
}