#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int num_planets, planet, check_visit;        // N = num_planets, P = check_visit 
    vector<int> visitado;
    vector<int>::iterator it;
    cin >> num_planets;
    for (int i = 0; i < num_planets; i++)
    {
        cin >> planet;
        visitado.push_back(planet);
    }
    stable_sort(visitado.begin(), visitado.end());
    while(cin >> check_visit && check_visit != 0){
        if(binary_search(visitado.begin(), visitado.end(), check_visit)){
            it = lower_bound(visitado.begin(), visitado.end(), check_visit);
            cout << it-visitado.begin() << endl;
        }
        else
            cout << "Nao foi visitado ainda." << endl;
    }  
}