#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    pair<long long, long long> data[3];
    cin >> data[0].first >> data[1].first >> data[2].first;
    cin >> data[0].second >> data[1].second >> data[2].second;
    long long S;
    cin >> S;
    sort(data, data + 3);
    long long T = 0, br = 0;
    for(int i = 0; i < 3; i++){
        if (data[i].first == 0) {
            br += data[i].second;
        } else {
            long long n = (S - T) / data[i].first;
            n = min(n, data[i].second);
            br += n;
            T += n * data[i].first;
        }
    }
    cout << br;
    return 0;
}
