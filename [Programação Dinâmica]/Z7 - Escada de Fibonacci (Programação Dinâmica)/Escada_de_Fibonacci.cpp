#include <bits/stdc++.h>
using namespace std;

int fib(int x)
{
    static int memo[100005];
   
    if(x == 0 || x == 1)
        return 1;
    if(memo[x] != 0)
        return memo[x];
        
    memo[x] = (fib(x-1) + fib(x-2)) % 70000;
    return memo[x];
}

signed main()
{
    int n;
    cin >> n;
    cout << fib(n-1) << endl;
}