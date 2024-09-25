#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::cout;
using std::cin;
using std::string;

string chess(int a, int b, int c){
    if((a == 0) || (a == 7) || (a == 56) || (a == 63)){
        if((a == 0) && (c == 9)){
            return "stop";
        }
        if((a == 7) && (c == 14)){
            return "stop";
        }
        if((a == 56) && (c == 49)){
            return "stop";
        }
        if((a == 63) && (c == 54)){
            return "stop";
        }
    }
    if(a > b){
        if((a - b) % 8 == 0){
            return "illegal state";
        }
    }
    if(b > a){
        if((b - a) % 8 == 0){
            return "illegal state";
        }
    }
    if(a > c){
        if((a - c) % 8 == 0){
            return "move not allowed";
        }
    }
    if(b > c){
        if((b - c) % 8 == 0){
            return "move not alowed";
        }
    }
    int p;
    for(int g = b; g != b + 9; g++){
        if(g % 8 == 0){
            p = g - 8;
            break;
        }
    }  
    for(int p; p != b; p++){
        if(a == p){
            return "move not allowed";
        }
    }
    int v;
    for(int q = c; q != c + 9; q++){
        if(q % 8 == 0){
            v = q - 8;
            break;
        }
    }  
    for(int v; v != b; v++){
        if(a == v){
            return "move not allowed";
        }
    }
    return "contunie";        
}

int main(){
    int a;
    int b;
    int c;
    cin >> a;
    cin >> b;
    cin >> c;
    if((0 > a) || (a > 63)){
        cout << "illegal move";
        return 0;
    }
    if((0 > b) || (b > 63)){
        cout << "illegal move";
        return 0;
    }
    if((0 > c) || (c > 63)){
        cout << "illegal move";
        return 0;
    }
    if(b == c){
        cout << "illegal move";
        return 0;
    }
    cout << chess(a, b, c);
    return 0;
}