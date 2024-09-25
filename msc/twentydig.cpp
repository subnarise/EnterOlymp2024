#include <iostream>
#include <vector>
#include <map>

using std::vector;
using std::cout;
using std::cin;

vector<int> get_triplets(){
    vector<int> triplets;
    for (int i = 111; i <= 611; i++){
        int ones = i % 10;
        int teens = (i - ones) / 10 % 100;
        int hunders = i / 100;
        if ((ones + teens + hunders < 9) &&
            (ones != 0) &&
            (teens != 0) &&
            (hunders != 0)) {
                triplets.push_back(i);
            }
    }
    return triplets;
}

void printvec(vector<int> v){
    for(int i : v){
        cout << i << "  ";
    }
    cout << std::endl;
}

int main(){
    printvec(get_triplets());
    return 0;
}