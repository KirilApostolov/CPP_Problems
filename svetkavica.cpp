#include <bits/stdc++.h>
using namespace std;

int main () {
    int n; char t, p; cin >> n >> t >> p;
    if (p == '/'){
        for(int i = 1; i <= n - 1; i++){
            for (int y = n - i; y > 0; y--) cout << ' ';
            cout << t;
            cout << "\n";
        }
        for(int i = 1; i <= n; i++) cout << t;
        cout << "\n";
        for(int i = 1; i <= n - 1; i++){
            for (int y = n - i - 1; y > 0; y--) cout << ' ';
            cout << t;
            cout << "\n";
        }
    } else {
        for(int i = 1; i <= n - 1; i++){
            for (int y = 1; y <= i - 1; y++) cout << ' ';
            cout << t;
            cout << "\n";
        }
        for(int i = 1; i <= n; i++) cout << t;
        cout << "\n";
        for(int i = 1; i <= n - 1; i++){
            for (int y = 0; y <= i - 1; y++) cout << ' ';
            cout << t;
            cout << "\n";
        }
    }
    return 0;
}

