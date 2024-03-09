#include <iostream>
using namespace std;

int main () {
    long long n, d, r = 0; cin >> n >> d;
    long long p[n], s = 0;
    for(long long i = 0; i < n; i++) cin >> p[i];
    for(long long i = 0; i < n; i++){
        s = 0;
        for(long long j = 0; j < n; j++) {
            s += p[(i + j) % n];
            if (s % d == 0) r = max (r, j + 1);
        }
    }
    cout << r;
    return 0;
}

