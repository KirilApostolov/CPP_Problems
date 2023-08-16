#include <iostream>
using namespace std;
int main(){
    static int s[1000000];
    static int e[1000000];
    static bool arr[1000000] = {false};
    int number;
    cin >> number;
    for (int i = 0; i < number; i++) {
        cin >> s[i] >> e[i];
    }
    for (int i1 = 0; i1 < number; i1++) {
        if (arr[i1]){
            cout << 1 << endl;
            continue;
        }
        bool ok = true;
        for (int i2 = 0; i2 < number; i2++) {
            if (i1 == i2) continue;
            if (s[i1] <= s[i2] && e[i1] >= s[i2]){
                ok = false;
                arr[i2] = true;
                break;
            }
            else if (s[i1] > s[i2] && s[i1]<= e[i2]){
                ok = false;
                arr[i2] = true;
                break;
            }
        }
        if(ok) cout << 0 << endl;
        else cout << 1 << endl;
    }
    return 0;
}
