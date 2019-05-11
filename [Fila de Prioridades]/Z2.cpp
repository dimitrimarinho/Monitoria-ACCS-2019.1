#include<iostream>
#include<queue>
using namespace std;
int main(){
    int N, G;
    priority_queue<int> best_warrior;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> G;
        int n_kill;
        for(int j = 0; j < G; j++){
          cin >> n_kill;
          best_warrior.push(n_kill);
        }
        cout << best_warrior.top() << endl;
        best_warrior.pop();
    }
}
