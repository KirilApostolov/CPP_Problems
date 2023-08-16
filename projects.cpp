#include <iostream>
using namespace std;
int main(){
    static int16_t totals[990000000] = {0};
    int number;
    cin >> number;
    int s[number];
    int e[number];
    for (int i = 0; i < number; i++) {
        cin >> s[i] >> e[i];
        for(int y = s[i]; y <= e[i]; y++) totals[y]++;
    }
    bool ok;
    for (int i = 0; i < number; i++) {
        ok = true;
        for (int y = s[i]; y <= e[i]; y++)
            if (totals[y] > 1){
                ok = false;
                break;
            }
        if(ok) cout << 0 << endl;
        else cout << 1 << endl;
    }
    return 0;
}
