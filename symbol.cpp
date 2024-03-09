#include <bits/stdc++.h>
using namespace std;

int main () {
    char c, p = ' ', minC, maxC;
    int br = 0, minbr = 301, maxbr = 0;
    cin >> c;
    while (c != '.'){
        if(c == p) {
           br++;
           cin >> c;
           continue;
        }
        if(p - '0' > 9 && br > 0 && br < minbr){
           minbr = br;
           minC = p;
        }
        if(p - '0' > 9 && br > maxbr){
           maxbr = br;
           maxC = p;
        }
        br = 1;
        p = c;
        cin >> c;
    }
    if(p - '0' > 9 && br > 0 && br < minbr){
       minbr = br;
       minC = p;
    }
    if(p - '0' > 9 && br > maxbr){
       maxbr = br;
       maxC = p;
    }
    cout << maxbr << " " << maxC << "\n" << minbr << " " << minC;
    return 0;
}
