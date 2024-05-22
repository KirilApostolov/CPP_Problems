#include <bits/stdc++.h>
using namespace std;

int main(){
    map<char, char> mp;
    int n; cin >> n;
    string st;
    getline(cin, st);
    for (int i = 0; i < n; i++){
        getline(cin, st);
        mp[st[2]] = st[0];
    }
    getline(cin, st);
    for (int i = 0; i < st.size(); i++) cout << mp[st[i]];
    cout << "\n";
    for(pair<char, char> x: mp) cout << x.first << " = " << x.second << "\n";
    return 0;
}
