#include<iostream>
#include<map>
using namespace std;
int main(){
    
    int N, P, L, valor_final = 0;
    string produto;
    map<string, int> compras;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> produto >> P;
        compras[produto] = P;
    }
    cin >> L;
    for(int i = 0; i < L; i++){
        cin >> produto;
        valor_final += compras[produto];
    }
    cout << valor_final << endl;
    
}
