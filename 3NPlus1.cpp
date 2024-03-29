#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, br;
    cin >> n;
    while (n != 0) {
        br = 0;
        while(n != 1){
            if(n % 2 == 1) n = 3 * n + 1;
            else n /= 2;
            br++;
            cout << n << ' ';
        }
        cout << "\n" << br << "\n";
        cin >> n;
    }
    return 0;
}

