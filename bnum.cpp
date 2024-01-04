#include <iostream>
using namespace std;

int main () {
    long long n, h, sum = 0, ps = 0, pos = 1, m = 1;
    cin >> n;
    h = n;
    while (h > 0){
        sum += h % 10;
        h /= 10;
        m *= 10;
    }
    h = n;
    m /= 10;
    while (h > 0){
        ps += h / m;
        if(ps == sum - ps){
            cout << h / m << " " << pos;
            return 0;
        }
        h %= m;
        m /= 10;
        pos++;
    }
    cout << 0;
    return 0;
}
