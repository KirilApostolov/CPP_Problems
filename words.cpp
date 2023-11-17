#include <bits/stdc++.h>
using namespace std;

int matchCount[10001];
bool matchIndex[10001];

void matches(const string s, const string w) {
    for (int i = s.find(w, 0); i != -1; i = s.find(w, i+1)) matchIndex[i+1]=true;
    int cnt = 0;
    for (int i = 1; i < 10001; i++){
        if (matchIndex[i]) cnt++;
        matchCount[i] = cnt;
    }
}

int main(){
    string s, w; cin >> s >> w;
    matches(s, w);
    int q; cin >> q;
    while (q--){
        int a, b; cin >> a >> b;
        long long acount = matchCount[a-1];
        long long bcount = matchCount[b - w.size() + 1];
        long long ans = (bcount - acount) * (bcount - acount - 1) / 2;
//        cout << "-------------------ans " << acount << " " << bcount << " " << ans << "\n";
        cout << ans << "\n";
    }
    return 0;
}
