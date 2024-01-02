#include <iostream>
using namespace std;

int main () {
    char a;
    int n, b = 0, maxB = 0 ;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a;
        if (a == 'a' || a == 'b') b++;
        if (a == 'c' || a == 'd') b--;
        if (b == 0) maxB = i + 1;
    }
    cout << maxB;
    return 0;
}
