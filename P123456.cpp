#include <iostream>
using namespace std;

bool nice(int st){
    int hh = st/3600;
    int mm = (st%3600)/60;
    int ss = (st%3600)%60;
    if (hh < 10) return false;
    if (mm < 10) return false;
    if (ss < 10) return false;
    int dd[10] = {0};
    dd[hh/10]++;
    dd[hh%10]++;
    dd[mm/10]++;
    dd[mm%10]++;
    dd[ss/10]++;
    dd[ss%10]++;
    for (int i = 1; i < 7; i++) if (dd[i] != 1) return false;
    return true;
}

int main(){
    int n;
    cin >> n;
    string startTime[n];
    string endTime[n];
    for(int i = 0; i < n; i++)
        cin >> endTime[i] >> startTime[i];
    for(int i = 0; i < n; i++){
        int d = 0;
        int st, et;
        st = stoi(startTime[i].substr(6,2)) + stoi(startTime[i].substr(3,2)) * 60 + stoi(startTime[i].substr(0,2)) * 3600;
        et =   stoi(endTime[i].substr(6,2)) +   stoi(endTime[i].substr(3,2)) * 60 +   stoi(endTime[i].substr(0,2)) * 3600;
        if (st <  45296) st = 45296;
        if (et > 236601) et = 236601;
        while (st <= et) {
            if (nice(st)) d++;
            st++;
        }
        cout << d << " ";
    }
    return 0;
}
