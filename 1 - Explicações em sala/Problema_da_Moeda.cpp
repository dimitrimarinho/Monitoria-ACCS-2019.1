/*
      Problema da moeda : Menor moedas de troco

            n = número de moedas
            v = valor desejado
            m = valor da moeda atual

            valor = 8
            número de moedas = 4;
*/
#include<limits.h>
#include<iostream>
#include<math.h>
using namespace std;
int main(){

      int n, v, m;
      cin >> n >> v;
      int moedas[v+1];
      moedas[0] = 0;
      for(int i = 1; i <= v; i++){
            moedas[i] = INT_MAX;
      }
      for(int i = 0; i < n; i++){
            cin >> m;                           // valor da moeda atual
            for(int j = 0; j < = v-m; ){
                  if(moedas[j] != )
                        moedas[j+m] = min(moedas[j+m], moedas[j]+1);
            }
      }
      if(moedas[v] != INT_MAX)
            cout << moedas[v] << endl;          // menor quantidade de moedas que consig usar para formar v
      else cout << -1 << endl;

}
