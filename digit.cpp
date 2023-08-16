#include <iostream>
using namespace std;

int main(){
    string st;
    int n = 0;
    cin >> st;
    for(int i1 = 0; i1 < st.length() -2; i1++){
        if (st[i1] == '8' || st[i1] == '9') continue;
        for(int i2 = i1+1; i2 < st.length() -1; i2++){
            if (st[i1] >= st[i2]) continue;
            if (st[i2] == '9') continue;
            for(int i3 = i2+1; i3 < st.length(); i3++){
                if(st[i2]<st[i3]) n++;
            }
        }
    }
    cout << n;
    return 0;
}
