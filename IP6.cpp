#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k = 0, d = 0;
    vector<string> ss(8,"");
    string s;
    getline(cin, s);
    for (auto x : s) {
        if (x == ':')
            if (ss[k] == "") d = k;
            else k++;
        else ss[k] = ss[k] + x;
    }
    if (ss[k] != "") k++;
    for (int y = 0; y < 8-k; y++) ss.insert(ss.begin() + d, "0");
    for (int i = 0; i < 8; i++) cout << ss[i] << " ";
    return 0;
}

