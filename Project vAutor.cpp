#include <bits/stdc++.h>+
using namespace std;

const int MAXN = 1e6;
tuple<int, int, int> intervals[MAXN]; /// left, right, index
bool results[MAXN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a, b;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        intervals[i] = make_tuple(a, b, i);
    }

    sort(intervals, intervals + n);
    int max_end = -1;
    int left, right, idx;
    bool intersect;
    for (int i = 0; i < n; i++) {
        tie(left, right, idx) = intervals[i];
        intersect = false;
        if(max_end >= left) intersect = true;
        if(i+1 < n && get<0>(intervals[i+1]) <= right) intersect = true;
        results[idx] = intersect;
        max_end = max(max_end, right);
    }

    for(int i = 0; i < n; i++) {
        cout << results[i] << endl;
    }
    return 0;
}
