#include <iostream>
using namespace std;

int main () {
    int n, k;
    cin >> n >> k;
    if (k > 2){
        char c, p = 'X';
        int br = 1, tbr = 0;
        for (int i = 0; i < n; i++){
            cin >> c;
            if (c == p) br++;
            else{
               tbr += br / 2;
               br = 1;
            }
            p = c;
        }
        cout << tbr + br / 2;
        return 0;
    }
    char c;
    int br1 = 0, br2 = 0;
    for (int i = 1; i <= n; i++){
        cin >> c;
        if(i%2 == 0 && c == '1') br1++;
        if(i%2 == 0 && c == '0') br2++;
        if(i%2 == 1 && c == '1') br2++;
        if(i%2 == 1 && c == '0') br1++;
    }
    cout << min(br1, br2);

    return 0;
}
