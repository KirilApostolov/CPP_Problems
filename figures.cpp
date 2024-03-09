#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n, p = 0 , s = 0, maxF = 0, minF = 0; cin >> n;
    while(p * 5 <= n){
        if((n - p * 5) % 6 == 0){
            minF = p + (n - p * 5) / 6;
            break;
        }
        p++;
    }
    while(s * 6 <= n){
        if((n - s * 6) % 5 == 0){
            maxF = s + (n - s * 6) / 5;
            break;
        }
        s++;
    }
    cout << minF << " " << maxF;
    return 0;
}

