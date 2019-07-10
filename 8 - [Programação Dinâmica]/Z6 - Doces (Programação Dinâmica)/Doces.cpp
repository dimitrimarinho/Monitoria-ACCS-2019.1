#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n, k;
    cin >> n >> k;
    
    vector<int> shops(n);
    for(int i = 0; i < n; ++i)
        cin >> shops[i];
        
    vector<int> dp(n+1);
    dp[0] = 0;
    
    for(int i = 1; i <= n; ++i)
    {
        if(i-k-1 >= 0)
            dp[i] = max(dp[i-1], shops[i-1] + dp[i-k-1]);
        else
            dp[i] = max(dp[i-1], shops[i-1]);
    }
    
    cout << dp[n] << endl;
}