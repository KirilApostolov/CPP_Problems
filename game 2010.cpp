#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, k, a = 1, b, br = 1, g; cin >> n >> k; b = n; g = (a + b) / 2;
    while (g != k) {
        if (g > k) b = g - 1;
        else a = g + 1;
        g = (a + b) / 2;
        br++;
    }
    cout << br;
}
