#include <iostream>
using namespace std;

int main(){
    string st;
    int k, T = 0;
    cin >> st; cin >> k;
    for (int i1 = 0; i1 < st.length(); i1++){
        int zeros = 0;
        for (int i2 = i1; i2 < st.length(); i2++){
            if(st[i2] == '0') zeros++;
            if(zeros == k) T++;
            if(zeros >  k) break;
        }
    }
    cout << T;
    return 0;
}
