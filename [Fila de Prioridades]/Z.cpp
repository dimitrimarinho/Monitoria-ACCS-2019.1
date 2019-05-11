#include<iostream>
#include<queue>
#include<utility>
using namespace std;
int main(){

    int D, X, N, idade;
    string nome;
    pair<int, string> pessoa;
    priority_queue<pair<int,string> > atendimento;
    cin >> D >> X;
    for(int i = 0; i < D; i++){
            cin >> N;
            for(int k = 0; k < N; k++){
              cin >> pessoa.second >> pessoa.first;
              atendimento.push(pessoa);
            }
            for(int k = 0; k < X; k++){
              if(atendimento.size() > 0){
                cout << atendimento.top().second << endl;
                atendimento.pop();
              }
            }
        }

}
