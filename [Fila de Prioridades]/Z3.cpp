#include<iostream>
#include<queue>
using namespace std;
int main(){

    int T, P, N;
    priority_queue<int, vector<int>, greater<int> > codes;
    cin >> T >> P;
    for (int i = 0; i < T; i++){
      cin >> N;
      for(int j = 0; j < N; j++){
          int lin_cod;
          cin >> lin_cod;
          codes.push(lin_cod);
      }
      for(int j = 0; j < P; j++){
          if(codes.size() > 0){
            cout << codes.top() << " ";
            codes.pop();
          }
      }
    }
    cout << endl;
}
