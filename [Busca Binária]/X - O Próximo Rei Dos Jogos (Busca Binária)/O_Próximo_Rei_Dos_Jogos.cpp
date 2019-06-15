#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int num_cards, num_Game_King; // N = num_cards, M = num_Game_King
    string card_name;
    vector<string> deck;
    cin >> num_cards;
    for (int i = 0; i < num_cards; i++)
    {
        cin >> card_name;
        deck.push_back(card_name);
    }
    stable_sort(deck.begin(), deck.end());
    cin >> num_Game_King;
    bool istheKing = true;
    for (int i = 0; i < num_Game_King; i++)
    {
        cin >> card_name;
        if(istheKing == true)
            istheKing = binary_search(deck.begin(), deck.end(), card_name);
    }
    if(istheKing == true)
        cout << "Jaden pode se tornar o Rei dos Jogos" << endl;
    else
        cout << "Jaden nao pode se tornar o Rei dos Jogos" << endl;    
}
