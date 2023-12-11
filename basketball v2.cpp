#include <iostream>
using namespace std;

int main(){
    bool basket = false;
    long long n, p, k, br1 = 0, bas = 0, c, v = 0, o = 0, d;
    cin >> n >> p >> k;
    while (bas < p){
        d = (n + o) / k;
        o = (n + o) % k;
        bas += d;
        n -= d;
        br1++;
        if (o == k - 1){
            cout << br1 + 1 << endl << "BASKETBALL" << endl;
            return 0;
        }
        if (n <= k) break;
    }
    if (bas >= p) {
        cout << br1 << endl << "VOLLEYBALL" << endl;
        return 0;
    }
    while (bas < p) {
        br1 += (k - o) / n;
        if ((k - o) % n == 1) {
            cout << br1 + 1 << endl << "BASKETBALL" << endl;
            return 0;
        }
        if ((k - o) % n != 0){
            br1++;
            o = n - (k - o) % n;
        }
        else o = 0;
        n--;
        bas++;

    }
    cout << br1 << endl << "VOLLEYBALL" << endl;
}
