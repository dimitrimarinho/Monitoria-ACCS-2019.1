#include<iostream>
#include<map>
using namespace std;
int main(){
    int N, quant;
    string gem;
    map<string, int> soul_gem;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> gem >> quant;
        if(soul_gem.find(gem) == soul_gem.end())
            soul_gem[gem] = 0;
        soul_gem[gem]+=quant;
    }
    for(map<string,int>::iterator it=soul_gem.begin(); it!= soul_gem.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
}
