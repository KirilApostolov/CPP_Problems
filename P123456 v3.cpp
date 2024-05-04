#include <bits/stdc++.h>
using namespace std;

int toNum(string s){return (s[7] - '0') + (s[6] - '0') * 10 + ((s[4] - '0') + (s[3] - '0') * 10) * 60 + ((s[1] - '0') + (s[0] - '0') * 10) * 3600;}

int main(){
    vector<int> happy;
    int I[6] = {1, 2, 3, 4, 5, 6};
    do if(I[2] != 6 && I[4] != 6) happy.push_back(I[5] + 10*I[4] + 60 * (I[3] + 10*I[2]) + 3600 * (I[1] + 10*I[0]));
    while(next_permutation(I, I + 6));
    int n, d; cin >> n;
    string st, et;
    for(int i = 0; i < n; i++){
        cin >> st >> et;
        d = 0;
        for (int i = 0; i < happy.size(); i++) if (happy[i] >= min(toNum(st), toNum(et)) && happy[i] <= max(toNum(st), toNum(et))) d++;
        cout << d << " ";
    }
    return 0;
}
