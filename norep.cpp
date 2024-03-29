#include <bits/stdc++.h>
using namespace std;

const int maxC = 126 - 33 + 1;
int chars[maxC];

int main () {
    string st; cin >> st;
    int l = 0, r = 0, maxR = 0;
    chars[st[0] - 33]++;
    while (r < st.size() - 1){
        r++;
        chars[st[r] - 33]++;
        if(chars[st[r] - 33] == 2) {
            maxR = max(maxR, r - l);
            while (chars[st[r] - 33] != 1) {
                chars[st[l] - 33]--;
                l++;
            }
        }
    }
    maxR = max(maxR, r - l + 1);
    cout << maxR;
}

