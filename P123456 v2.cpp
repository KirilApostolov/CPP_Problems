#include <bits/stdc++.h>
using namespace std;

int toNum(string s){return (s[7] - '0') + (s[6] - '0') * 10 + ((s[4] - '0') + (s[3] - '0') * 10) * 60 + ((s[1] - '0') + (s[0] - '0') * 10) * 3600;}

int main(){
    vector<int> happy;
    for(int i1 = 1; i1 < 7; i1 ++){
        for(int i2 = 1; i2 < 7; i2 ++) {
            if (i1 == i2) continue;
            for(int i3= 1; i3 < 6; i3 ++) {
                if (i3 == i1 || i3 == i2 ) continue;
                for(int i4 = 1; i4 < 7; i4 ++){
                    if (i4 == i1 || i4 == i2 || i4 == i3) continue;
                    for(int i5 = 1; i5 < 6; i5 ++){
                        if(i5 == i1 || i5 == i2 || i5 == i3 || i5 == i4) continue;
                        for(int i6 = 1; i6 < 7; i6 ++){
                            if(i6 == i1 || i6 == i2 || i6 == i3 || i6 == i4 || i6 == i5) continue;
                            happy.push_back(i6 + 10*i5 + 60 * (i4 + 10*i3) + 3600 * (i2 + 10*i1));
                        }
                    }
                }
            }
        }
    }
    int n, d; cin >> n;
    string st, et;
    for(int i = 0; i < n; i++){
        cin >> st >> et;
        d = 0;
        for (int i = 0; i < happy.size(); i++) if (happy[i] >= min(toNum(st), toNum(et)) && happy[i] <= max(toNum(st), toNum(et))) d++;
        cout << d << " ";
    }
    return 0;
}

