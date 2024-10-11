#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::cout;
using std::cin;
using std::string;

struct card{
    char nom;
    char mast;
};

int main(){
    string inputed_card;
    vector<card> deck;
    for(int i = 0; i < 52; i++){
        cin >> inputed_card;
        deck.push_back({inputed_card[0]}, {inputed_card[1]});
    }
    cout << deck[1].n << deck[51].m << std::endl;
    return 0;
}
