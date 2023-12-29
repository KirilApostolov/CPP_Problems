#include <iostream>
using namespace std;

int main () {
    int n, br = 0, k = 3;
    cin >> n;
    for (int i = 4; i <= n; i += 3){
        if((n-i)%k == 0) br++;
        k += 2;
    }
    cout << (br + 1) / 2;
    return 0;
}
