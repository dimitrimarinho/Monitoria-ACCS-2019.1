#include<iostream>
#include<set>
using namespace std;
int main(){
    
    int N, infectado;
    string nome;
    set<string> contaminados;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> infectado >> nome;
        if(infectado == 1)
            contaminados.insert(nome);
    }
    for(set<string> :: iterator it=contaminados.begin(); it != contaminados.end(); it++)
        cout << *it << endl;
    
}
