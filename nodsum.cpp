#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, k = 0;
    cin >> n;
    for (int i = 2; i<= sqrt(n); i++){
        if (n%i == 0) {
            k = i;
            break;
        }
    }
    if (k == 0) cout << 1;
    else cout << n/k;
    return 0;
}
