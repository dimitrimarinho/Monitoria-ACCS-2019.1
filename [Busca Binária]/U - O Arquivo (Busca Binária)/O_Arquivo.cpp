#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    int L, C, A;
    map<int, char> l;
    char S;
    cin >> L;
    for(int i = 0; i < L; i++){
        cin >> C >> S;
        l[C] = S;       
    }
    cin >> A;
    for(int i = 0; i < A; i++){
        cin >> C;
        if(l.count(C))
            cout << l.find(C)->second << endl;
        else 
            cout << "Ausente" << endl;
    }
}