#include <iostream>
using namespace std;
int main(){
    string st;
    int n = 0;
    cin >> st;
    for (int i = 0; i < st.length(); i++){
        if (st[i] == 'b') continue;
        bool fl = false;
        int d = i;
        int a = 0;
        while (true) {
            if (!fl)
                if (st[d] == 'a') a++;
                else {
                    fl = true;
                    a--;
                }
            else
                if (st[d] == 'b') a--;
                else break;
            if (a == 0) {
                n++;
                break;
            }
            d++;
            if (d >= st.length()) break;
        }
    }
    cout << n;
    return 0;
}
