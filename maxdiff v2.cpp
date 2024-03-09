#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, br1 = 1, br2 = 0, mbr1 = 0, mbr2 = 0, maxbr1 = 0, maxbr2 = 0; cin >> n;
    char c, l;
    cin >> l;
    for(int i = 1; i < n; i++){
        cin >> c;
        if(c == l) {
            br1++;
            mbr1 = br1;
            maxbr1 = max(maxbr1, mbr1);
        } else {
            if (br1 > 0) br1--;
            else if (br1 == 0) mbr1 = 0;
        }
        if(c != l) {
            br2++;
            mbr2 = br2;
            maxbr2 = max(maxbr2, mbr2);
        } else {
            if(br2 > 0) br2--;
            else if(br2 == 0) mbr2=0;
        }
    }
    cout << max(max(mbr1, maxbr1), max(mbr2, maxbr2));
    return 0;
}
