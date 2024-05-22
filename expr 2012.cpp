#include <bits/stdc++.h>
using namespace std;

int main(){
    string st;
    getline(cin, st);
    vector<char> zn;
    for (int i = 0; i < st.size(); i++){
        if(st[i] == '+' || st[i] == '-'){
            zn.push_back(st[i]);
            st[i] = ' ';
        }
    }
    int sum, c, n = 0 ;
    stringstream ss;
    ss << st;
    ss >> sum;
    while(ss >> c){
        if(zn[n] == '+') sum += c;
        else sum -= c;
        n++;
    }
    cout << sum;
    return 0;
}
