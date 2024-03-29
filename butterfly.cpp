#include <bits/stdc++.h>
using namespace std;

int main () {
    string s; char c;
    getline(cin, s);
    cin >> c;
    if (c == 'c')
        for(int i = 0; i < s.size(); i++){
            cout << s[i];
            if (s[i] == 'A' || s[i] == 'O' || s[i] == 'U' || s[i] == 'I' || s[i] == 'E' || s[i] == 'Y' ||
                s[i] == 'a' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i' || s[i] == 'e' || s[i] == 'y')
                cout << 'f' << s[i];
        }
    else
       for(int i = 0; i < s.size(); i++){
            cout << s[i];
            if (s[i] == 'A' || s[i] == 'O' || s[i] == 'U' || s[i] == 'I' || s[i] == 'E' || s[i] == 'Y' ||
                s[i] == 'a' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i' || s[i] == 'e' || s[i] == 'y')
                i += 2;
       }
    return 0;
}
