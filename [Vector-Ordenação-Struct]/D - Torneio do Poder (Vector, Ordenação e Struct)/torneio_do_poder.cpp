#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct guerreiro{
    string nome;
    int poder;
};
bool cmp(guerreiro i, guerreiro j){
    return ( (i.poder > j.poder) || (i.poder == j.poder && i.nome < j.nome) );
}
int main(){
    int DEBUG = 0;
    int J, K;
    cin >> J >> K;    
    vector<guerreiro> inscritos;
    for (int i = 0; i < J; i++){
        guerreiro g;
        cin >> g.nome >> g.poder;
        inscritos.push_back(g);
    }
    stable_sort(inscritos.begin(), inscritos.end(), cmp);
    if(DEBUG){
        for(int i = 0; i < J; i++)
            cout << inscritos[i].nome << " " << inscritos[i].poder << endl;
    }
    for(int i = 0; i < K; i++)
        cout << inscritos[i].nome << " " << inscritos[i].poder << endl;
}