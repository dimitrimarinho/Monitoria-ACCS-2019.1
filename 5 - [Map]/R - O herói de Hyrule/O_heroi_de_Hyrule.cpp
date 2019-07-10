#include<iostream>
#include<map>
using namespace std;
int main(){
    int Q, P;
    string item;
    cin >> Q;
    map<string, int> inventario;
    map<string,int>::iterator it;
    for(int i = 0; i < Q; i++){
        cin >> P;
        cin.ignore();
        getline(cin, item);
        if(inventario.find(item) != inventario.end()){
            if(P > inventario[item]){
                it = inventario.find(item);
                inventario.erase(it);
                inventario[item] = P;
            }
        }
        else
          inventario[item] = P;
    }
     for(map<string, int>::iterator it=inventario.begin(); it!= inventario.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
}