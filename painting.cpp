#include <bits/stdc++.h>
using namespace std;

const int maxC = 1000001;
int fence[maxC];

int main () {
    int c, n, s = 0; cin >> n;
    vector<pair<pair<int,int>, int>> d;
    for(int i = 1; i <= n; i++){
        cin >> c;
        if (c == 0) continue;
        if (fence[c] == 0) {
            pair<pair<int,int>, int> dc;
            dc.first.first  = i;
            dc.first.second = i;
            dc.second = c;
            d.push_back(dc);
            fence[c] = d.size();
        } else d[fence[c] - 1].first.second = i;
    }
    for(int i = 0; i < d.size(); i++) s += d[i].first.second - d[i].first.first + 1;
    cout << d.size() << " " << s << "\n";
    for(int i = 0; i < d.size(); i++) cout << "Move " << i + 1 << ": " << d[i].second << " " << d[i].first.first << " " << d[i].first.second << "\n";
    return 0;
}
