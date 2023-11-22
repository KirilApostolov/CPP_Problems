#include <bits/stdc++.h>
using namespace std;

int main () {
    char a;
    int h12, m11, s12, h22, m21, s22, mh, mm, ms;
    cin >> a;
    cin >> a; h12 = a - '0';
    cin >> a; m11 = a - '0';
    cin >> a; cin >> a;
    cin >> a; s12 = a - '0';
    cin >> a;
    cin >> a; h22 = a - '0';
    cin >> a; m21 = a - '0';
    cin >> a; cin >> a;
    cin >> a; s22 = a - '0';
    cin >> mh >> mm >> ms;
    int mt = mh * 3600 + mm * 60 + ms, s, e;
    bool notFound = true;
    for (int hh = 1; hh < 13; hh++) {
        int h11 = hh / 10;
        int H12 = hh % 10;
        if (h12 == H12) continue;
        for (int mm = 0; mm < 60; mm++) {
            int M11 = mm / 10;
            int m12 = mm % 10;
            if (m11 == M11) continue;
            for (int ss = 0; ss < 60; ss++) {
                int s11 = ss / 10;
                int S12 = ss % 10;
                if (s12 == S12) continue;
                s = (h11 * 10 + h12) * 3600 + (m11 * 10 + m12) * 60 + (s11 * 10 + s12);
                e = mt + s;
                if ( e > 13 * 60 * 60) e -= 12 * 60 * 60;
                int newh22 = (e / 3600) % 10;
                int h21 = (e / 3600) / 10;
                int newm21 = ((e % 3600) / 60) / 10;
                int m22 = ((e % 3600) / 60) % 10;
                int news22 = ((e % 3600) % 60) % 10;
                int s21 = (( e % 3600) % 60) /10;
                if (newh22 == h22 && newm21 == m21 && news22 == s22){
                    cout << h11 << h12 << ":" << m11 << m12 << ":" << s11 << s12 << " ";
                    cout << h21 << h22 << ":" << m21 << m22 << ":" << s21 << s22 << endl;
                    notFound = false;
                }
            }
        }
    }
    if(notFound) cout << "Impossible";
    return 0;
}
