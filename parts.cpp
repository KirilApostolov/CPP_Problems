#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s = 0;
    cin >> n;
    int d[n];
    for(int i = 0; i < n; i++){
        cin >> d[i];
        s+= d[i];
    }
    for(int i = 2; i <= s / 2; i++){
        if (s % i != 0) continue;
        int ss = 0;
        for(int j = 0; j < n; j++){
            ss += d[j];
            if (ss == s / i) ss = 0;
            if (ss >  s / i) break;
            if (j == n - 1){
                cout << i;
                return 0;
            }
        }
    }
    cout << 0;

    return 0;
}
