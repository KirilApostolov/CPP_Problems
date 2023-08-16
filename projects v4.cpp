#include <iostream>
#include <tuple>
#include <algorithm>
using namespace std;

int const maxProjects = 1000000;
bool result[maxProjects];
pair<int,int> ss [maxProjects];
pair<int,int> ee [maxPr
ojects];

bool cmp (pair<int, int> a, pair<int, int> b){ return a.first < b.first; }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool res;
    int N, s, e;
    cin >> N;
    for (int i = 0; i < N; i++) { cin >> s >> e; ss[i] = {s,i}; ee[i] = {e,i};}
    sort(ss, ss + N, cmp);
    int currentMaxEnd = -1, index;
    for (int i = 0; i < N; i++){
        res = false;
        s = ss[i].first;
        index = ss[i].second;
        e = ee[index].first;
        if ((currentMaxEnd >= s) || (( i+1 < N) && ss[i+1].first <= e)) res = true;
        currentMaxEnd = max(currentMaxEnd, e);
        result[index] = res;
    }
    for (int i = 0; i < N; i++) cout << result[i] << "\n";
    return 0;
}
