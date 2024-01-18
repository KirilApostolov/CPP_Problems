#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, b = 2, k = 1, s = 2; cin >> n;
    while (s < n) {
        b++;
        if(b%2 != 0) k++;
        s += k;
    }
    cout << b;
    return 0;
}
