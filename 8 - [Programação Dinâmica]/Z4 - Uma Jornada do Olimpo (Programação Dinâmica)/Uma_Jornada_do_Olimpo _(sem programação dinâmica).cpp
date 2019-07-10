#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int P, M, N, equip_disp, itens = 0, capacidade = 0;
    cin >> P >> M >> N;
    int peso[N];   // vetor com o peso dos itens
    for(int i = 0; i < N; i++){
        cin >> equip_disp;
        peso[i] = equip_disp;
    }
    stable_sort(peso, peso+N);
    for(int i = 0; i < N; i++){
        if((capacidade + peso[i]) <= (M-P)){
            itens++;
            capacidade+= peso[i];
        }
        else
            break;
    }
    cout << itens << endl;    
}
