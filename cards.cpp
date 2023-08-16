#include <iostream>
using namespace std;

int main(){
    int n, c, moves = 0;
    int ff[100001] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c;
        ff[c]++;
    }
    for(int i = 0; i <= 100000; i++) moves += ff[i] / 2;
    if (moves%2 == 0) cout << 2;
    else cout << 1;
    return 0;
}
