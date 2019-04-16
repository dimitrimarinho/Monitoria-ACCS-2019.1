#include<iostream>
#include<set>
using namespace std;
int main(){
    int J, K, N, P, DEBUG = 0;
    int cn = 0, cp = 0;
    set<int> novas, repetidas;
    cin >> J >> K >> N;
    for(int i = 0; i < N; i++){
        cin >> P;
        if(novas.count(P) == 1){
            cp++;
            repetidas.insert(P);
            novas.erase(P);
        }
        else{
            if(repetidas.count(P) != 1){
                novas.insert(P);
                cn++;
            }
            else{
                cp++;
            }
        }
    }
    if(DEBUG){
        cout << "--- Cartas novas: " << endl; 
        for(set<int> :: iterator it=novas.begin(); it!=novas.end();it++){
            cout << *it << endl;
        }
        cout << endl;
        cout << "--- Cartas repetidas: " << endl;
        for(set<int> :: iterator it=repetidas.begin(); it!=repetidas.end();it++){
            cout << *it << endl;
        }
        cout << endl;
    }    
    cout << (cn * J + cp * K) << endl;
}