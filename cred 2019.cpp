#include <iostream>
using namespace std;

int main () {
    int n, m, br = 1;
    cin >> n >> m;
    while (n <= m){
        int s = 0, h = n;
        while (h > 0){
            s += h % 10;
            h /= 10;
        }
        n += s;
        br++;
    }
    cout << --br;
    return 0;
}
