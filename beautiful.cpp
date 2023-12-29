#include <iostream>
using namespace std;

int main(){
    long long n, k, h = 1, d;
    cin >> n >> k;
    for (int i = 1; i < n; i++) h *= 10;
    if ( h%k == 0) cout << h;
    else {
       if (k * (h/k + 1) > h*10-1) cout << "NO";
       else cout << k * (h/k + 1);
    }
    return 0;
}
