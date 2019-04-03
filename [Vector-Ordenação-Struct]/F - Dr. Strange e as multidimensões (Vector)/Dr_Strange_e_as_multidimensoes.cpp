#include<iostream>
#include<vector>
using namespace std;
int main(){
    int DEBUG = 0;
    int N, num, dif = 0;
    cin >> N;
    vector<int> u(N), v(N), soma_u_v(N);
    for(int i = 0; i < N; i++){
        cin >> num;
        u[i] = num;
    }
    for(int i = 0; i < N; i++){
        cin >> num;
        v[i] = num;
    }
    for(int i = 0; i < N; i++){
        soma_u_v[i] = u[i] + v[i];
        if(DEBUG)
            cout << soma_u_v[i] << " ";
    }
    if(DEBUG)
        cout << endl;
    for(int i = 0; i < N; i++){
        cin >> num;
        if (num != soma_u_v[i]){
            cout << "NOPE :(\n";
            dif = 1;
            break;
        }
    }
    if(dif == 0)
        cout << "OK\n";
}
