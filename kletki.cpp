#include <iostream>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int o = N - K;
    int i = K - 1;
    int a = i - o % i;
    cout << a;
    return 0;
}
