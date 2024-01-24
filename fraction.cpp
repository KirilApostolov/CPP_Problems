#include <iostream>
using namespace std;
int main () {
    long long n, x = 1, i = 0, h;
    cin >> n;
    h = n;
    while (h % 5 == 0) h /= 5;
    while (h % 2 == 0) h /= 2;
    if(h != 1) cout << "NO";
    else {
        while(x != 0){
            x = (x % n) * 10;
            i++;
        }
        cout << i - 1;
    }
    return 0;
}
