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
    int wl = w.size();
    while (q--){
        int a, b; cin >> a >> b;
        long long ans = 0;
        for (int i = a; i <= b - 2 * wl; i++)
            if (matchIndex[i]){
                int nSt = matchCount[i];
                int uni = matchCount[i + wl];
                int eSt = matchCount[b - wl + 1];
                ans += (eSt - uni);
//                cout << "----- " << nSt << " " << uni << " " << eSt << "\n";
            }
        cout << ans << "\n";
    }
    return 0;
}
