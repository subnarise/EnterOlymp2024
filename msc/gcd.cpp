#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int gcd (int a, int b){
    int c;
    while(c != 0){
        c = b % a;
        b = a;
        a = c;
    }
    return b;
}

int main(){
    int a;
    int b;
    cin >> a;
    cin >> b;
    cout << gcd (a, b);
}