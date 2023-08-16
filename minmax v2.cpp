#include<bits/stdc++.h>
using namespace std;

int a[100000];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    long long s;
    cin >> s;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    vector<pair <long long, long long> > v;
    int start = 0;
    for (int i = 0; i < n; i++)
        if (i == n-1 || a[i] != a[i+1]){
            v.push_back({a[i], i-start+1});
            start = i+1;
        }
    cout << endl;
    for (int i = 0; i < v.size(); i++) cout << v[i].first << "-" << v[i].second << " ";
    cout << endl;
    cout << endl;
    int l = 0;
    int r = v.size()-1;
    while (l < r){
        if (v[l].second < v[r].second) {
            if (s >= (v[l+1].first-v[l].first)*v[l].second) {
                v[l+1].second += v[l].second;
                s -= (v[l+1].first-v[l].first)*v[l].second;
                l++;
            } else {
                v[l].first += s/v[l].second;
                break;
            }
        } else {
            if (s >= -(v[r-1].first-v[r].first)*v[r].second) {
                v[r-1].second += v[r].second;
                s -= -(v[r-1].first-v[r].first)*v[r].second;
                r--;
            } else {
                v[r].first -= s/v[r].second;
                break;
            }
        }
        for (int i = 0; i < v.size(); i++) cout << v[i].first << "-" << v[i].second << " ";
        cout << " -- " << s << endl;
    }
    for (int i = 0; i < v.size(); i++) cout << v[i].first << "-" << v[i].second << " ";
    cout << " -- " << s << endl;
    cout << v[r].first-v[l].first << endl;

    return 0;
}
