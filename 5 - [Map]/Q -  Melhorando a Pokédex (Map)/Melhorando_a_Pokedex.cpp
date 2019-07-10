#include<iostream>
#include<map>
#include<iomanip>
using namespace std;
int main(){
    cout << fixed << setprecision(2);
    map<string, int> pokedex;
    string pokemon;
    int total = 0, quant;
    double percent;
    while(cin >> pokemon, pokemon != "FIM"){
        ++total;
        if(pokedex.find(pokemon) == pokedex.end())
            pokedex[pokemon]= 0;
        ++pokedex[pokemon];
    }
    for(map<string,int>::iterator it=pokedex.begin(); it!= pokedex.end(); it++){
        quant  = (*it).second;
        percent = ((double)quant/(double)total)*100;
        cout << (*it).first << " " << percent << endl;
    }
}