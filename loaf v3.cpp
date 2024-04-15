#include <bits/stdc++.h>
using namespace std;

int main () {
    int L, n, maxL = 0, maxDL = 0, maxLN = 0, maxDLN = 0, z; cin >> L >> n;
    int red[n], b[n], e[n];
    for(int i = 0; i < n; i++ ) {
        cin >> red[i] >> b[i] >> e[i];
        if(maxL < e[i] - b[i] + 1){
            maxL = e[i] - b[i] + 1;
            maxLN = i + 1;
        }
    }
    for(int i = 0; i < n; i++ ) {
        vector<pair<int, int>> in;
        in.push_back({b[i], e[i]});
        for(int v = 0; v < n; v++){
            if(v == i || red[i] < red[v]) continue;
            for(int j = 0; j < in.size(); j++){
                int B = in[j].first, E = in[j].second;
                if(B > e[v] || E < b[v]) continue;
                if(B > b[v] && E < e[v]) in.erase(in.begin() + j);
                if(B < b[v] && E > e[v]){
                    in[j].second = b[v] - 1;
                    in.push_back({e[v] + 1,E});
                    continue;
                }
                if(B < e[v] && E > e[v]) in[j].first = e[v] + 1;
                if(B < b[v] && E > b[v]) in[j].second = b[v] - 1;
            }
        }
        z = 0;
        for(int v = 0; v < in.size(); v++) z += in[v].second - in[v].first + 1;
        if(maxDL < z){
            maxDL = z;
            maxDLN = i + 1;
        }
    }
    cout << maxLN << "\n" << maxDLN;
    return 0;
}

