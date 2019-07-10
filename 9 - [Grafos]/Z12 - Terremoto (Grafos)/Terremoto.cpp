#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> ciranda;
vector<bool> visited;
int count = 0;
void caminho(int i);

int main(){

    int V, E, P, A, B, C;
    
    cin >> V >> E >> P;

    ciranda.resize(V);
    visited.resize(V);

    for (int i = 0; i < E; i++){
        cin >> A >> B >> C;
        if(C == 1){
            ciranda[A-1].push_back(B-1);
            ciranda[B-1].push_back(A-1);
        }
    }

    caminho(P-1);    
    cout << count << endl;
    for(int i = 0; i < V; i++){
        if(visited[i] == true)
            cout << i + 1 << " ";
    }
    cout << endl;

}

void caminho(int i){

    if(visited[i] == true)
        return;
    visited[i] = true;
    count++;
    for(vector<int>::iterator it = ciranda[i].begin(); it!= ciranda[i].end(); it++){
        caminho(*it);
    }

}