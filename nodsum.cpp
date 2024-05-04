#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k = 0;
    cin >> n;
    for (int i = 2; i<= sqrt(n); i++)
        if (n%i == 0) {
            cout << n/i;
            return 0;
        }
    cout << 1;
    return 0;
}
