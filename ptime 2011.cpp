#include <bits/stdc++.h>
using namespace std;

int h, m;

void nextM(){
    m++;
    if(m == 60) {
       h++;
       m = 0;
    }
    if(h == 24) h = 0;
    return;
}

bool isPall(){
    string mm = to_string(m), hh = to_string(h);
    if (m < 10) mm = '0' + mm;
    if (h < 10) hh = '0' + hh;
    reverse(mm.begin(), mm.end());
    if (mm == hh) return true;
    else return false;
}

int main(){
    string st; cin >> st;
    h = (st[0] - '0') * 10 + (st[1] - '0'), m = (st[3] - '0') * 10 + (st[4] - '0');
    nextM();
    while(!isPall()) nextM();
    cout << h / 10 << h % 10 << ":"  << m / 10 << m % 10;
    return 0;
}
