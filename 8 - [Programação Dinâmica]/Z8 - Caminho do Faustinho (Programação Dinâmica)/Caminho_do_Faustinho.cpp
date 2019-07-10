#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int time, volume, value;
};

int n, t, c;
Item items[20];
int memo[20][200][200];

int knapsack(int item_id, int time_left, int capacity_left)
{
    if(item_id >= n)
        return 0;
    if(time_left <= 0)
        return 0;
    if(capacity_left <= 0)
        return 0;
    if(memo[item_id][time_left][capacity_left] != -1)
        return memo[item_id][time_left][capacity_left];

    int best = knapsack(item_id+1, time_left, capacity_left);
    if(time_left >= items[item_id].time && capacity_left >= items[item_id].volume)
    {
        best = max(best, items[item_id].value + knapsack(item_id+1, time_left-items[item_id].time, capacity_left-items[item_id].volume));
    }
    
    memo[item_id][time_left][capacity_left] = best;
    return best;
}

signed main()
{
    cin >> n >> t >> c;
    
    for(int i = 0; i < n; ++i)
        cin >> items[i].time >> items[i].volume >> items[i].value;
 
    memset(memo, -1, sizeof(memo));
    cout << knapsack(0, t, c) << endl;
}