#include<iostream>
#include<set>
using namespace std;
int main(){
    int N, X, M;
    cin >> N;
    set<int> disponiveis, necessarios;
    for(int i = 0; i < N; i++){
        cin >> X;
        necessarios.insert(X);
    }
    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> X;
        disponiveis.insert(X);
        if(necessarios.count(X) == 1){
            disponiveis.erase(X);
            necessarios.erase(X);
        }        
    }
    if(disponiveis.size() != 0 || necessarios.size()!= 0){
        if(disponiveis.size() != 0){
            cout << "Sobrou:" << endl;
            for(set<int>:: iterator it = disponiveis.begin(); it!= disponiveis.end(); it++){
                cout << *it << " ";       
            }
            cout << endl;
        }
        if(necessarios.size() != 0){
            cout << "Faltou:" << endl;
            for(set<int>:: iterator it = necessarios.begin(); it!= necessarios.end(); it++){
                cout << *it << " ";       
            }
            cout << endl;
        }
    }
    else{
        cout << "Acertou tudo" << endl;
    }    
}