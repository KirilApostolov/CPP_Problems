#include <iostream>
#include <tuple>
#include <algorithm>
using namespace std;

int const maxProjects = 1000000;
bool result[maxProjects];
tuple<int, int, int> data[maxProjects];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool res;
    int N, s, e;
    cin >> N;
    for (int i = 0; i < N; i++) { cin >> s >> e; data[i] = make_tuple(s, e, i); }
    sort(data, data + N);
    int currentMaxEnd = -1, index;
    for (int i = 0; i < N; i++){
        res = false;
        tie(s, e, index) = data[i];
        if ((currentMaxEnd >= s) || (( i+1 < N) && get<0>(data[i+1]) <= e)) res = true;
        currentMaxEnd = max(currentMaxEnd, e);
        result[index] = res;
    }
    for (int i = 0; i < N; i++) cout << result[i] << "\n";
    return 0;
}
