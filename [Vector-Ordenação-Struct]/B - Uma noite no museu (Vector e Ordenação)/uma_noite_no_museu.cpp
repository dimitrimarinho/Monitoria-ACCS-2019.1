#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int DEBUG = 0;
    int N, num, aditional_statues = 0;
    cin >> N;
    vector<int> ord(N);
    for (int i = 0; i < N; i++){
        cin >> num;
        ord[i] = num;
    }
    sort(ord.begin(), ord.end());
    aditional_statues = ( ((ord[N-1] - ord[0]) - 1) - (N - 2));
    cout << aditional_statues << endl;
    if(DEBUG){
        for(int i = 0; i < N; i++)
            cout << ord[i] << " ";
        cout << endl;
    }
}