#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int num_white_walkers, id_ww, num_idNK, id_night_king; // X = num_white_walkers, N = num_idNK
    vector<int> battle_field;
    cin >> num_white_walkers;
    for (int i = 0; i < num_white_walkers; i++)
    {
        cin >> id_ww;
        battle_field.push_back(id_ww);
    }
    stable_sort(battle_field.begin(), battle_field.end());
    cin >> num_idNK;
    bool found;
    for (int i = 0; i < num_idNK; i++)
    {
        cin >> id_night_king;
        found = binary_search(battle_field.begin(), battle_field.end(), id_night_king);
        if(found)
            break;
    }
    if(found == true)
        cout << "Preparem o vidro de dragao!!!" << endl;
    else
        cout << "E assim termina nossa vigilia" << endl;
}