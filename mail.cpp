#include <iostream>
using namespace std;

int main () {
    int n, k, tin, maxwait = 0, tout = 0;
    cin >> n;
    pair<int, int> t[n];
    string st;
    for (int i = 0; i < n; i++){
        cin >> st;
        t[i].first = ((st[0] - '0') * 10 + (st[1] - '0')) * 60 + (st[3] - '0') * 10 + (st[4] - '0');
        cin >> st;
        t[i].second = ((st[0] - '0') * 10 + (st[1] - '0')) * 60 + (st[3] - '0') * 10 + (st[4] - '0');
    }
    cin >> k;
    for (int d = 8 * 60; d < 24 * 60; d++)
         for (int i = 0; i < n; i++){
              if (d >= t[i].second) continue;
              int starP = max(d, t[i].first);
              if (t[i].second - starP >= k){
                  if( maxwait < starP + k - d){
                      maxwait = starP + k - d;
                      tin = d;
                      tout = starP + k;
                  }
                  break;
              }
         }
    if (tin / 60 < 10) cout << "0";
    cout << tin / 60 << ":";
    if (tin % 60 < 10) cout << "0";
    cout << tin % 60 << " ";
    if (tout / 60 < 10) cout << "0";
    cout << tout / 60 << ":";
    if (tout % 60 < 10) cout << "0";
    cout << tout % 60;
    return 0;
}
