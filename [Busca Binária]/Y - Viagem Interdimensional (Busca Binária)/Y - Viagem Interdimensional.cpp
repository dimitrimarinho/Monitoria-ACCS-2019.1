#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int num_dim_available, num_dim_tovisit, dim_ava, dim_tovisit, reach_total = 0;  // N = num_dim_available, M = num_dim_tovisit

    vector<int> available_dimensions;
    cin >> num_dim_available >> num_dim_tovisit;
    for (int i = 0; i < num_dim_available; i++){
        cin >> dim_ava;
        available_dimensions.push_back(dim_ava);
    }
    stable_sort(available_dimensions.begin(), available_dimensions.end());
    for (int i = 0; i < num_dim_tovisit; i++){
        cin >> dim_tovisit;
        if(binary_search(available_dimensions.begin(), available_dimensions.end(), dim_tovisit))
            reach_total++;        
    }
    cout << reach_total << endl;    
}
