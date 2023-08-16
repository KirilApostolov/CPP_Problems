#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    char z;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            z = s[i];
            s[i] = ' ';
        }
        if(s[i] == '=') s[i] = ' ';
    }
    stringstream ss;
    ss << s;
    string a, b, c;
    ss >> a;
    ss >> b;
    ss >> c;
    bool hg = false;
    if(z == '-'){
        z = '+';
        swap(a,c);
        hg = true;
    }
    if(z == '/'){
        z = '*';
        swap(a,c);
        hg = true;
    }
    vector<pair<int,int>> A;
    vector<pair<int,int>> B;
    for (int i = a.size() - 1; i >= 0; i--) if(a[i] == '?') A.push_back({i,0});
    for (int i = b.size() - 1; i >= 0; i--) if(b[i] == '?') B.push_back({i,0});

    while(true){
        string a1 = a;
        string b1 = b;
        int j;
        for(int i = 0; i< A.size(); i++) a1[A[i].first] = '0' + A[i].second;
        for(j = 0; j < A.size(); j++) {
            A[j].second++;
            if(A[j].second <= 9) break;
            else A[j].second = 0;
        }
        while(true){
            int g;
            for(int i = 0; i< B.size(); i++) b1[B[i].first] = '0' + B[i].second;
            for(g = 0; g < B.size(); g++) {
                B[g].second++;
                if(B[g].second <= 9) break;
                else B[g].second = 0;
            }
            int first = stoi(a1);
            int second = stoi(b1);
            int result;
            if (z == '+') result = first + second;
            if (z == '*') result = first * second;
            string R = to_string(result);
            if (R.size() == c.size()){
                bool OK = true;
                for (int i = 0; i < R.size(); i++) if (c[i] != '?' && c[i] != R[i]) OK = false;
                if(OK && hg) cout << R << " " << b1 << " " << a1 << endl;
                if(OK && !hg) cout << a1 << " " << b1 << " " << R << endl;
            }
            if(g >= B.size()) break;
        }
        if(j >= A.size()) break;
    }
    return 0;
}
