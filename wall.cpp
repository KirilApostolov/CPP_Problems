#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int bb[5];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    long long K;
    cin >> N >> K;
    pair<int, int> data[N];
    for(int i = 0; i < N; i++) cin >> data[i].second >> data[i].first;
    sort(data, data+N);
    long long wall = 0;
    int sc, oo;
    priority_queue<int> ost;
    for(int i = N-1; i >= 0; i--){
        while (ost.size() != 0 && ost.top() > data[i].first && K > 0){
            K--;
            oo = ost.top();
            wall += oo;
            ost.pop();
//            cout << "# " << wall << " 1 " << " " << oo << endl;
        }
        sc = data[i].second / data[i].first;
        if (sc > K) sc = K;
        K -= sc;
        wall += sc * data[i].first;
//        cout << "* " << wall << " " << sc << " " << sc * data[i].first << endl;
        ost.push(data[i].second % data[i].first);
        if (K == 0) break;
    }
    while (ost.size() != 0 && K > 0){
        K--;
        oo = ost.top();
        wall += oo;
        ost.pop();
//        cout << "# " << wall << " 1 " << " " << oo << endl;
    }
    cout << wall;
}
