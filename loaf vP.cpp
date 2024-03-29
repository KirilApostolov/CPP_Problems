# include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N >> N;
    int Ninput[N], be[N], kr[N];
    int maxD = 0, maxDN = 0;
    for(int i = 1; i <= N; i++) {
        cin >> Ninput[i] >> be[i] >> kr[i];
        if((kr[i] - be[i] + 1) == maxD) maxDN = min(i,maxDN);
        if((kr[i] - be[i] + 1) > maxD) {
            maxD = kr[i] - be[i] + 1;
            maxDN = i;
        }
    }
    int maxE = 0, maxEN = 0;
    for(int i = 1; i <= N; i++) {
        int tek = kr[i] - be[i] + 1, r = -1, l = be[i];
        for(int j = 1; j <= N; j++) {
            if(Ninput[i] <= Ninput[j]) continue;
            if(be[j] <= r + 1) {
                if(kr[j] > r) r = min(kr[j], kr[i]);
            } else {
                tek -= max((min(r, kr[i]) - max(l, be[i]) + 1), 0);
                l = be[j];
                r = min(kr[j], kr[i]);
            }
        }
        tek -= max((min(r, kr[i]) - max(l, be[i]) + 1), 0);
        if(tek == maxE) maxEN = min(maxEN, i);
        if(tek > maxE) {
            maxE = tek;
            maxEN = i;
        }
    }
    cout << maxDN << "\n" << maxEN;
}
