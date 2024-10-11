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
    } // patovi situacia
    if(a > b){
        if((a - b) % 8 == 0){
            return "illegal state";
        }
    }
    if(b > a){
        if((b - a) % 8 == 0){
            return "illegal state";
        }
    } // po verticali
    if(a > c){
        if((a - c) % 8 == 0){
            return "ilegal move";
        }
    }
    if(b > c){
        if((b - c) % 8 == 0){
            return "illegal move";
        }
    } // hod po vertivali
    int mnumb;
    int maxnumb;
    for(int f = b; f != b + 8; f++){
        if (f % 8 == 0){
            mnumb = f - 8;
            maxnumb = f - 1;
            break;
        }
    }
    while(mnumb < maxnumb){
        if(a == mnumb){
            return "illegal state";
        }
        mnumb++;
    } // po gorisontali
    int mxumb;
    int maxxumb;
    for(int r = c; r != c + 8; r++){
        if (r % 8 == 0){
            mxumb = r - 8;
            maxxumb = r - 1;
            break;
        }
    }
    while(mxumb < maxxumb){
        if(a == mxumb){
            return "illegal move";
        }
        mxumb++;
    } // hod po gorizontali
    int sch = 0;
    if(c > b){
        if((c - b) % 8 != 0){
            sch++;
        }
    }
    if(b > c){
        if((b - c) % 8 != 0){
            sch++;
        } // nerealni hod po verticaly
    }
    int mb;
    int mxb;
    for(int q = b; q != b + 8; q++){
        if (q % 8 == 0){
            mb = q - 8;
            mxb = q - 1;
            break;
        }
    }
    while(mb < mxb){
        if(c == mb){
            sch++;
            break;
        }
        mb++;
    } // nerealni hod po gorizontaly
    if(sch == 1){
        return "move not allowed";
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
    } // hodi za predeli doski
    cout << chess(a, b, c);
    return 0;
}