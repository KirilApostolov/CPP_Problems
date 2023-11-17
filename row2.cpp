#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    int a[n];
    double ng = 0, nm = 10000;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(ng < a[i]) ng = a[i];
        if(nm > a[i]) nm = a[i];
    }

    double ogr = nm / 3 + ng / 3 * 2;
    for(int i = 0; i < n; i++) {
        if (a[i] <= ogr){
            cout << i + 1;
            return 0;
        };
    }

    return 0;
}
