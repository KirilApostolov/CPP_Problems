#include <iostream>
using namespace std;

int main(){
    string st;
    int arr[26] = {0}, k, mlen = 0, si = 0, l = 0, r = 0, chh = 0;
    cin >> k >> st;
    while (r < st.size()){
            if (chh < 2) arr[st[r] - 'a']++;
            chh = 0;
            for(int i = 0; i < k; i++) if (arr[i] != 0) chh++;
            if (chh == 1 && mlen < r - l + 1){
                mlen = r - l + 1;
                si = l;
            }
            if (chh > 1) {
                 l++;
                 arr[st[l-1]-'a']--;
            }
            else r++;
    }
    cout << mlen << "\n" << st.substr(si, mlen);
    return 0;
}
