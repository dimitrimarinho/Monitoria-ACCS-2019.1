#include<iostream>
#include<set>
using namespace std;
int main(){
    int X, L, Y;
    cin >> X;
    set<int> escolhidos;
    for(int i = 0; i < X; i++){
        for(int i = 0; i < 6; i++){
            cin >> L;
            escolhidos.insert(L);
        }
        cin >> Y;
        for(set<int>::iterator it=escolhidos.begin(); it != escolhidos.end(); it++) {
            if(*it < Y){
                escolhidos.erase(*it);
            }
        }
    }
    for(set<int>::iterator it=escolhidos.begin(); it != escolhidos.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;   
}