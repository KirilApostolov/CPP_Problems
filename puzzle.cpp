#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n, k;
    cin >> n >> k;
    vector<long long> f1;
    for (int i = k; i < k + n; i++) f1.push_back(i);
    for (int i = 0; i < n - 1; i++) {
        vector<long long> f2;
        for (int y = 0; y < f1.size() - 1; y++) f2.push_back(f1[y] + f1[y+1]);
        f1 = f2;
    }
    cout << f1[0];
    return 0;
}
