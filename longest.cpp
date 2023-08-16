#include <iostream>
using namespace std;

int main(){
    string st, subst = "";
    int arr[26] = {0};
    int k;
    cin >> k;
    cin >> st;
    for (int i1 = 0; i1 < st.length(); i1++){
        for(int i = 0; i < k; i++) arr[i] = 0;
        for(int i2 = i1; i2 < st.length(); i2++){
                arr[st[i2]-'a']++;
                int chh = 0;
                for(int i3 = 0; i3 < k; i3++)
                    if (arr[i3] != 0) chh++;
                if (chh > 1) break;
                if (chh == 1 && subst.length() < i2-i1+1) subst = st.substr(i1, i2-i1+1);
        }
    }
    cout << subst.length() << endl;
    if (subst.length() != 0) cout << subst;
    return 0;
}
