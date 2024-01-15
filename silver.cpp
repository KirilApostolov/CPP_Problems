#include<iostream>
using namespace std;

int main(){
    int n, c, maxC = 0, secondC = 0; cin >> n;
    for (int i = 0; i < n; i++){
         cin >> c;
         if (c > maxC){
            secondC = maxC;
            maxC = c;
         } else if ( c != maxC) secondC = max(secondC, c);
    }
    cout << secondC;
    return 0;
}
