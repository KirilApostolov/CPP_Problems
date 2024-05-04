#include <iostream>
using namespace std;

int main(){
    long long a, b, d, n = 0; cin >> a >> b;
    while (a != 0){
        if(a < b) swap(a, b);
        d = a / b;
        a = a % b;
        n += d;
    }
    cout << n;
    return 0;
}
