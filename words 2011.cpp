#include <bits/stdc++.h>
using namespace std;

int main(){
    int mwo = 0;
    string st, wo;
    while(cin >> st){
        if(st.size() > mwo){
           mwo = st.size();
           wo = st;
        } else if (st.size() == mwo && st[0] < wo[0]) wo = st;
    }
    cout << mwo << " " << wo;
    return 0;
}
