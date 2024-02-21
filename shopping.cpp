#include <iostream>
using namespace std;

int main () {
    int n, d, r = 1; cin >> n >> d;
    long long p[n], m = 0, s, ind;
    for(int i = 0; i < n; i++) cin >> p[i];
    for(int i = 0; i < n; i++){
        s = 0;
        for(int j = 0; j < n; j++) {
            ind = (i + j) % n;
            s += p[ind];
            if (s % d == 0 && m < s) {
                m = s;
                r = j;
            }
        }
    }
    cout << r + 1;
    return 0;
}
