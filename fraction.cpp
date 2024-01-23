#include <iostream>
using namespace std;
int main () {
    int n, x = 1, i = 0;
    cin >> n;
    while(x != 0){
        x = (x % n) *10;
        i++;
        if (i > 100000000){
            cout << "NO";
            return 0;
        }
    }
    cout << i - 1;
    return 0;
}
