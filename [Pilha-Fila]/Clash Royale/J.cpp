#include<iostream>
#include<queue>
using namespace std;
int main(){
    int DEBUG = 0;
    int N, L, poder, graveyard = 0;
    queue<int> my_monsters, enemy_monsters;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> poder;
        my_monsters.push(poder);
    }
    cin >> L;
    for (int i = 0; i < L; i++){
        cin >> poder;
        enemy_monsters.push(poder);
    }
    for(int i = 0; i < L; i++){
        if(my_monsters.empty())
          break;
        if(my_monsters.front() >= enemy_monsters.front()){
            if(DEBUG){
                cout << "ganhou " << my_monsters.front() << " " << enemy_monsters.front() << endl;
            }
            int aux1 = my_monsters.front();
            if(!enemy_monsters.empty())
              enemy_monsters.pop();
            if(!my_monsters.empty())
              my_monsters.pop();
            my_monsters.push(aux1);
        }
        else{
            if(DEBUG){
                cout << "perdeu (+1) " << my_monsters.front() << " " << enemy_monsters.front() << endl;
            }
            if(!my_monsters.empty())
              my_monsters.pop();
            if(!enemy_monsters.empty())
              enemy_monsters.pop();
            graveyard++;
        }
    }
   cout << graveyard << endl;
}
