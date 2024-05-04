#include <iostream>
using namespace std;

int main(){
    string st;
    int k, zeroes = 0, l = 0, r = 0, n = 0;
    cin >> st >> k;

    while(l < st.size()){
        if(st[r] == '0') zeroes++;
        if(zeroes == k) n++;
        cout << l << ":" << r << " " << zeroes << " --- Total: " << n << "\n";
        while(zeroes == k + 1){
            if(st[l] == '0') {
                zeroes--;
//                n++;
                r = l - 1;
            }
            l++;
            cout << l << ":" << r << " " << zeroes << " --- Total: " << n << "\n";
        }
        if(r < st.size() - 1)r++;
        else l++;
    }
    cout << n;
    return 0;
}
