#include <iostream>
using namespace std;

const int maxD = 50000;
int d1[maxD], d2[maxD];

int main () {
    int c, d, n, s; cin >> d >> n;
    for(int i = 0; i < n; i++){
        cin >> c;
        d1[c%d]++;
    }
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> c;
        d2[c%d]++;
    }
    s = d1[0] * d2[0];
    for(int i = 1; i < d; i++) s += d1[i] * d2[d-i];
    cout << s;

    return 0;
}
