#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, v = 0; cin >> n >> k;
    string st;
    cin >> st;
    for(int i = 0; i < st.size(); i++){
        if (v >= k) break;
        if(st[i] == '1'){
            st[i] = 'z';
            v++;
        }
    }
    v = 0;
    for(int i = st.size() - 1; i >= 0; i--){
        if (v >= k) break;
        if(st[i] == '0'){
            st[i] = 'e';
            v++;
        }
    }
    for(int i = 0; i < st.size(); i++){
        if(st[i] == 'z') st[i] = '0';
        if(st[i] == 'e') st[i] = '1';
    }
    cout << st << "\n";
    return 0;
}
