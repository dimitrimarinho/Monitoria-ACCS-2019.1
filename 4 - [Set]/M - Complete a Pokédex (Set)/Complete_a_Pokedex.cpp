#include<iostream> 
#include<set>
using namespace std;
int main(){
    int N, X, M;
    cin >> N;
    set<int> registrado;
    for(int i = 0; i < N; i++){
        cin >> X;
        registrado.insert(X);
    }
    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> X;
        if(registrado.count(X) != 1){
            cout << "Temos que pegar!" << endl;
            registrado.insert(X);
        }
        else
            cout << "Repetido" << endl;
    }
}