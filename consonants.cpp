#include <bits/stdc++.h>
using namespace std;

int main () {
    char c;
    int maxS = 0, ps = 0;
    while(cin >> c)
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y'){
            maxS = max(maxS, ps);
            ps = 0;
        } else ps++;
    maxS = max(maxS, ps);
    cout << maxS;
    return 0;
}

