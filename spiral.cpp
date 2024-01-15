#include<iostream>
using namespace std;

int main(){
    long long n, m, r = 0; cin >> n >> m;
    if (min(m, n) == 0) {
        cout << 0;
        return 0;
    }
    if (n == 1) {
        cout << 0;
        return 0;
    }
    if (m == 1) {
        cout << 1;
        return 0;
    }
    if (n > m) r++;
    r += 2 + 2 * (min(n, m) - 2);
    cout << r;
    return 0;
}
