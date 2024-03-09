#include <iostream>
using namespace std;

const int maxN = 100001;
int a[maxN], b[maxN];

bool ch(int n){
    for(int i = 1; i < n; i++)
        if(a[i-1] < a[i] || b[i-1] < b[i]) return false;
    return true;
}

void check1(int n, int i1){
    swap(a[i1], b[i1]);
    if(ch(n)){
        cout << "1" << "\n" << i1 + 1;
        exit(0);
    }
    swap(a[i1], b[i1]);
}

void check2(int n, int i1, int i2){
    swap(a[i1], b[i1]); swap(a[i2], b[i2]);
    if(ch(n)){
        cout << "2" << "\n" << i1 + 1 << " " << i2 + 1;
        exit(0);
    }
    swap(a[i1], b[i1]); swap(a[i2], b[i2]);
}

void check3(int n, int i1, int i2, int i3){
    swap(a[i1], b[i1]); swap(a[i2], b[i2]); swap(a[i3], b[i3]);
    if(ch(n)){
        cout << "3" << "\n" << i1 + 1 << " " << i2 + 1 << " " << i3 + 1;
        exit(0);
    }
    swap(a[i1], b[i1]); swap(a[i2], b[i2]); swap(a[i3], b[i3]);
}


int main () {
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
    if(ch(n)){
       cout << "0" << "\n";
       return 0;
    }
    for(int i1 = 0; i1 < n; i1++) check1(n, i1);
    for(int i1 = 0; i1 < n - 1; i1++)
        for(int i2 = i1; i2 < n; i2++)
            check2(n, i1, i2);
    cout << "Impossible!";
    return 0;
}

