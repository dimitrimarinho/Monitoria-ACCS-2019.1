#include<iostream>
#include<map>
using namespace std;
int main(){
    int N, M;
    string w1, w2td;
    map<string, string> dict;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> w1 >> w2td;
        dict[w1] = w2td;
    }
    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> w1;
        if(dict.find(w1) == dict.end())
            cout << w1 << " ";
        else
            cout << dict[w1] << " "; 
    }
    cout << endl;
}