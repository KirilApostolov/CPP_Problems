#include <bits/stdc++.h>
using namespace std;

int main () {
    string s1, s2; cin >> s1 >> s2;
    int t; cin >> t;
    vector<pair <char, bool>> d;
    reverse(s1.begin(), s1.end());
    for(int i = 0; i < s1.size(); i++) d.push_back({s1[i], true});
    for(int i = 0; i < s2.size(); i++) d.push_back({s2[i], false});
    for(int i = 0; i < t; i++)
        for(int x = 0; x < d.size() - 1; x++)
            if(d[x].second == true && d[x + 1].second == false) swap(d[x], d[x++]);
    for(int x = 0; x < s1.size() + s2.size(); x++) cout << d[x].first;
    return 0;
}
