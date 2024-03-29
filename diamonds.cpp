#include <bits/stdc++.h>

using namespace std;

int main(){
    int w, d;
    vector<pair<int, int>> dia;
    do{
      cin >> w >> d;
      if(!(w == 0 && d == 0)) dia.push_back({w,d});
    } while (!(w == 0 && d == 0));
    sort(dia.begin(), dia.end());
    w = 1000000;
    for(int i = 0; i < dia.size() - 1; i++){
        if (w > dia[i+1].first - dia[i].first){
            w = dia[i+1].first - dia[i].first;
            d = abs(dia[i+1].second - dia[i].second);
        }
        if ((w == dia[i+1].first - dia[i].first) && (d > abs(dia[i+1].second - dia[i].second)))
             d = abs(dia[i+1].second - dia[i].second);
    }
    cout << w << " " << d;
    return 0;
}
