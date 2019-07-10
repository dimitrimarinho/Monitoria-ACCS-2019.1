#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> galaxia;
vector<bool> visited;
void caminho(int i);

int main(){

    int N, M, Gi1, Gi2;
    
    cin >> N >> M;

    galaxia.resize(N);
    visited.resize(N);

    for (int i = 0; i < M; i++){
        cin >> Gi1 >> Gi2;
        galaxia[Gi1-1].push_back(Gi2-1);
        galaxia[Gi2-1].push_back(Gi1-1);
    }

    bool possible = true;
    caminho(0);    

    for(int i = 0; i < N; i++){
        if(visited[i] == false){
            possible = false;
            break;
        }
    }

    if(possible == false)
        cout << "Nao" << endl;
    else
        cout << "Sim" << endl;

}

void caminho(int i){

    if(visited[i] == true)
        return;
    visited[i] = true;
    for(vector<int>::iterator it = galaxia[i].begin(); it!= galaxia[i].end(); it++){
        caminho(*it);
    }

}