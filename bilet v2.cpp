#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, c, s1 = 0, s2, p1 = 0, p2 = 0, p, r, w;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> c;
        r = 9 - c;
        c++;
        s1 += c;
        if(i == 0) {
           p1 = 2 + c * 2;
           if(r != 0) p2 = 2 + r * 2;
        } else {
           p1 += 2 + c * 2 - 2 * min(p, c);
           if(r != 0) p2 += 2 + 2 * r - 2 * min(r, w);
        }
        p = c;
        w = r;
    }
    s2 = n * 10 - s1;
    cout << s1 << " " << p1 << "\n";
    cout << s2 << " " << p2 << "\n";
    return 0;
}
