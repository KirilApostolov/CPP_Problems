#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n], len[n], i, j;
    for(i = 0 ; i < n ; i++) {
        cin>>len[i];
        a[i]=0;
    }
    while(true){
        for(int i = 0; i< n; i++) cout << a[i] << " ";
        cout << endl;
        for(j = n-1 ; j >= 0 ; j--) {
            a[j]++;
            if(a[j] <= len[j]) break;
            else a[j] = 0;
        }
        if(j < 0) break;
    }
    return 0;
}
