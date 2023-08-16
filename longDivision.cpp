#include <bits/stdc++.h>
using namespace std;

pair <string, int> devision (string st, int d) {
    string result = "";
    int pos = 0, cr;
    long long current = 0;
    bool add0 = false;
    while (pos < st.length()){
            current = current*10 + st[pos] - '0';
            cr = current/d;
            if (cr != 0) add0 = true;
            if (add0) result = result + to_string(cr);
            current = current - d * cr;
            pos++;
    }
    return {result, current};
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string st;
    int d;
    cin >> st >> d;
    pair<string, int> res = devision(st, d);
    cout << res.first << " " << res.second;
}
