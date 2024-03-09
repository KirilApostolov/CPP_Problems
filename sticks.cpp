#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n, m, br = 0, i, r; cin >> n >> m;
    r = m - n;
    for(i = 1; i * i < r; i++){
        if (r % i == 0){
            br++;
            if(r/i < n) br++;
        }
    }
    if (i * i == r) br++;
    cout << br;
    return 0;
}

