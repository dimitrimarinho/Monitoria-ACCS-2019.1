#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct pacote{
    string nome;
    int energia;
};
bool cmp(pacote i, pacote j){
    return ( (i.nome < j.nome) || (i.nome == j.nome && i.energia > j.energia) );
}
int main(){
    int DEBUG = 0;
    int P;
    cin >> P;    
    vector<pacote> saida;
    for (int i = 0; i < P; i++){
        pacote p;
        cin >> p.nome >> p.energia;
        saida.push_back(p);
    }
    stable_sort(saida.begin(), saida.end(), cmp);
    if(DEBUG){
        for(int i = 0; i < P; i++)
            cout << saida[i].nome << " " << saida[i].energia << endl;
    }
    for(int i = 0; i < P; i++)
        cout << saida[i].nome << " " << saida[i].energia << endl;
}