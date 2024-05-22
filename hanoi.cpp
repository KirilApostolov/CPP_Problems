#include <bits/stdc++.h>
using namespace std;

const string kuli[3] = {"left  ", "middle", "right "};

void hanoiTowers(int n, int init, int temp, int finn) {
    if (n == 0) return;
    hanoiTowers(n - 1, init, finn, temp);
    cout <<" Moving disc from " << kuli[init] << " to " << kuli[finn] << "\n";
    hanoiTowers(n - 1, temp, init, finn);
}

int main(){
    hanoiTowers(4, 0, 1, 2);
}




