#include <bits/stdc++.h>
using namespace std;

int main () {
    string s1, s2;
    cin >> s1 >> s2;
    int t;
    cin >> t;
    pair <char, bool> r[s1.size() + s2.size()];
    for(int i = 0; i < s1.size(); i++) {
        r[i].first = s1[s1.size() - i - 1];
        r[i].second = true;
    }
    for(int i = s1.size(); i < s2.size() + s1.size(); i++) {
        r[i].first = s2[i - s1.size()];
        r[i].second = false;
    }

    for(int i = 0; i < t; i++) {
        for(int x = 0; x < s1.size() + s2.size() - 1; x++)
        if(r[x].second == true && r[x + 1].second == false) {
            swap(r[x], r[x++]);
            x++;
        }
    }
    for(int x = 0; x < s1.size() + s2.size(); x++) cout << r[x].first;
    return 0;
}
