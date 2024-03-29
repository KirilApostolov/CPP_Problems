#include <bits/stdc++.h>
using namespace std;

const int maxL = 100000001;
bool l[maxL];

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int L, n, maxL = 0, maxDL = 0, maxLN = 0, maxDLN = 0; cin >> L >> n;
    pair<pair<int, int>, pair<int, int>> data[n];
    for(int i = 0; i < n; i++ ) {
        cin >> data[i].first.first >> data[i].second.first >> data[i].second.second;
        data[i].first.second = i + 1;
        if(maxL < data[i].second.second - data[i].second.first + 1){
            maxL = data[i].second.second - data[i].second.first + 1;
            maxLN = i + 1;
        }
    }
    sort(data, data + n);
    int z;
    for(int i = 0; i < n; i++ ) {
        z = 0;
        for(int y = data[i].second.first; y <= data[i].second.second; y++) {
            z += 1 - l[y];
            l[y] = true;
        }
        if(maxDL < z){
            maxDL = z;
            maxDLN = data[i].first.second;
        }
    }
    cout << maxLN << "\n" << maxDLN;
    return 0;
}

