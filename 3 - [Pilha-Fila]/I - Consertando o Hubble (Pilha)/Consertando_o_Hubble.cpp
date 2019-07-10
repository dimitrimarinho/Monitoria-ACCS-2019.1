#include<iostream>
#include<stack>
using namespace std;
int main(){
    int N;
    stack<int> uteis;
    cin >> N;
    for(int i = 0; i < N; i++){
        int component;
        cin >> component;
        if(component!= -1){
            uteis.push(component);    
        }
        else{
            if(!uteis.empty())
                uteis.pop();
        }
    }
    int soma = 0;
    while(!uteis.empty()){
        soma+= uteis.top();
        uteis.pop();
    }
    cout << soma << endl;
}