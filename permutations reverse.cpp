#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int j, a[n], len[n];
    bool rev[n] = {};
    for(int i = 0 ; i < n ; i++) {
        cin>>len[i];
        a[i]=0;
    }
    while(true){
        for(int i = 0; i< n; i++) cout << a[i] << " ";
        cout << endl;
        for(j = 0; j < n; j++) {
            if(j != n && rev[j]){
                a[j]--;
                if(a[j] >= 0 ) break;
                else {a[j] = 0; rev[j] = false; cout << endl;}
            } else {
                a[j]++;
                if(a[j] <= len[j]) break;
                else {a[j]--; rev[j] = true; cout << endl;}
            }
        }
        if(j >= n) break;
    }
    return 0;
}
