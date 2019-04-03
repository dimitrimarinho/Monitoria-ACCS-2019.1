#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct word{
    string information; 
    int size;
};
bool cmp(word i, word j){
    return ( (i.size < j.size) || (i.size == j.size && i.information < j.information) );
}
int main(){
    string s;
    vector<word> formigues;
    while(cin >> s){
        word order;
        order.size = s.size();
        order.information = s;        
        formigues.push_back(order);
    }
    stable_sort(formigues.begin(), formigues.end(), cmp);
    for(int i = 0; i < formigues.size(); i++){
        cout << formigues[i].information << " ";
    }
    cout << endl;
}