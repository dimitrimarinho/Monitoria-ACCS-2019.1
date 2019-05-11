#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
int main(){

  int N, G, gs, S, ss,  M;
  priority_queue <int, vector<int> > grifinoria;
  priority_queue <int, vector<int>, greater<int> > sonserina;
  cin >> N;
  for(int i = 0; i < N; i++){
      cin >> G >> S;
      for(int j = 0; j < G; j++){
        cin >> gs;
        grifinoria.push(gs);
      }
      for(int j = 0; j < S; j++){
        cin >> ss;
        sonserina.push(ss);
      }
      cin >> M;
      for(int j = 0; j < M; j++){
        if(grifinoria.size() > 0 && sonserina.size() > 0){
          cout << grifinoria.top() << " " << sonserina.top() << endl;
          grifinoria.pop();
          sonserina.pop();
        }
      }
  }
}
