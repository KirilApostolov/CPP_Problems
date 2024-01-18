#include<bits/stdc++.h>
using namespace std;

bool isPower2(int a){
    while (a > 1) {
        if (a % 2 != 0) return false;
        a /= 2;
    }
    return true;
}

int main(){
    int n, c; cin >> n;
    vector<int> p;
    for (int i = 0; i < n; i++){
        cin >> c;
        if(isPower2(c)) p.push_back(c);
    }
    sort(p.begin(), p.end());
    for (int i = 0; i < p.size(); i++) cout << p[i] << " ";
    if (p.size() == 0) cout << "No";
    return 0;
}
