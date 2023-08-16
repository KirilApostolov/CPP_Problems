#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a, b, x, y, minP = 440;
    cin >> a >> b >> x >> y >> n;
    vector <int> mask;
    for (int i = 0; i < n; i++) mask.push_back(i);
    vector <pair<int,int>> cars(n);
    for (int i = 0; i < n; i++) cin >> cars[i].first >> cars[i].second;
    do{
        int P = abs(cars[mask[0]].first-x) + abs(cars[mask[0]].second-y);
        for (int i = 1; i < n; i++)
            P += abs(cars[mask[i]].first-cars[mask[i-1]].first) + abs(cars[mask[i]].second-cars[mask[i-1]].second);
        P += abs(cars[mask[n-1]].first-x) + abs(cars[mask[n-1]].second-y);
        if(P<minP) minP = P;
    } while (next_permutation(mask.begin(), mask.end()));
    cout << minP;
    return 0;
}
