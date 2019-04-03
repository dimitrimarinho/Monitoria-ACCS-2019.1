#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int DEBUG = 0;
    int N, num;
    cin >> N;
    vector<int> fichas;
    for (int i = 0; i < N; i++){
        cin >> num;
        fichas.push_back(num);
    }
    sort(fichas.begin(), fichas.end());
    if(DEBUG){
        for (int i = 0; i < N; i++){
            cout << fichas[i] << " ";
        }
        cout << endl;
    }
    int meio = (N+1)/2;
    cout << fichas[meio-1] << endl;
}