#include <iostream>
using namespace std;
int main(){
    int happy[480] = {0};
    int n, nn;
    cin >> n;
    string startTime[n];
    string endTime[n];
    for(int i = 0; i < n; i++)
        cin >> endTime[i] >> startTime[i];
    for(int i1 = 1; i1 < 7; i1 ++)
        for(int i2 = 1; i2 < 7; i2 ++)
            for(int i3= 1; i3 < 7; i3 ++)
                for(int i4 = 1; i4 < 7; i4 ++)
                    for(int i5 = 1; i5 < 7; i5 ++)
                        for(int i6 = 1; i6 < 7; i6 ++)
                            if (i1 != i2 && i1 != i3 && i1 != i4 && i1 != i5 && i1 != i6 &&
                                            i2 != i3 && i2 != i4 && i2 != i5 && i2 != i6 &&
                                                        i3 != i4 && i3 != i5 && i3 != i6 &&
                                                                    i4 != i5 && i4 != i6 &&
                                                                                i5 != i6 && i3 != 6 && i5 != 6){
                                happy[nn] = i6 + 10*i5 + 60 * (i4 + 10*i3) + 3600 * (i2 + 10*i1);
                                nn++;
                            }
    for(int i = 0; i < n; i++){
        int d = 0;
        int st, et;
        st = stoi(startTime[i].substr(6,2)) + stoi(startTime[i].substr(3,2)) * 60 + stoi(startTime[i].substr(0,2)) * 3600;
        et =   stoi(endTime[i].substr(6,2)) +   stoi(endTime[i].substr(3,2)) * 60 +   stoi(endTime[i].substr(0,2)) * 3600;
        if (st > et) swap(st,et);
        for (int i = 0; i < nn; i++)
            if(happy[i] >= st && happy[i] <=et) d++;
        cout << d << " ";
    }
    return 0;
}
