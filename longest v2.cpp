#include <iostream>
using namespace std;

int main(){
    string st; int k, mlen = 0, sp = 0, n; cin >> k; cin >> st; n = st.length();
    for (int i1 = 0; i1 < n; i1++){
        int arr[26] = {0};
        for(int i2 = i1; i2 < n; i2++){
                arr[st[i2]-'a']++;
                int chh = 0;
                for(int i3 = 0; i3 < k; i3++) if (arr[i3] != 0) chh++;
                if (chh > 1) break;
                if (chh == 1 && mlen < i2 - i1 + 1) {
                    mlen = i2 - i1 + 1;
                    sp = i1;
                }
        }
    }
    cout << mlen << "\n";
    if (mlen != 0) cout << st.substr(sp, mlen);
    return 0;
}
