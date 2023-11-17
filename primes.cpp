#include <bits/stdc++.h>
using namespace std;

int main () {
    int a, b, d = 0;
    cin >> a >> b;
    for (int i = a + 1; i < b; i++){
        bool prime = true;
        for (int y = 2; y <= sqrt(i); y++){
            if (i % y == 0){
                prime = false;
                break;
            }
        }
        if (prime) {
           int pr = i;
           while (pr > 0){
                d++;
                pr /= 10;
           }
        }
    }
    cout << d;
    return 0;
}
