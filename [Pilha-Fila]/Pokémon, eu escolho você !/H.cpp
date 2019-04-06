#include<iostream>
#include<stack>
using namespace std;
int main(){

  int DEBUG = 0;
  int H, result = 0;
  cin >> H;
  stack<int> ash, gary;
  for(int i = 0; i < H; i++){
    int X, Y;
    cin >> X >> Y;
    ash.push(X);
    gary.push(Y);
  }
  while(!gary.empty() && !ash.empty()){

        int aux_ash, aux_gary;
        aux_ash = ash.top();
        aux_gary = gary.top();

        if(aux_ash == aux_gary){
            result++;
            if(!ash.empty())
              ash.pop();
            if(!gary.empty())
              gary.pop();
        }
        else if(aux_ash > aux_gary){
          if(DEBUG)
            cout << "Gary: " << aux_gary << " Ash: " << aux_ash << endl;
          aux_ash = aux_ash - aux_gary;
          if(DEBUG)
            cout << "Ash ganhou, NovoPoder: " << aux_ash << endl;
          if(!ash.empty())
            ash.pop();
          ash.push(aux_ash);
          if(!gary.empty())
            gary.pop();
        }
        else if(aux_gary > aux_ash){
          result++;
          if(DEBUG)
            cout << "Gary: " << aux_gary << " Ash: " << aux_ash << endl;
          aux_gary = aux_gary - aux_ash;
          if(DEBUG)
              cout << "Ash perdeu (+1), GaryNovoPoder: " << aux_gary << endl;
          if(!gary.empty())
            gary.pop();
          gary.push(aux_gary);
          if(!ash.empty())
            ash.pop();
        }

  }
    cout << result << endl;

}
