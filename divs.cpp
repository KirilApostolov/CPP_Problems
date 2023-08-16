#include <bits/stdc++.h>
using namespace std;

bool Dx[1000000001];

int divisorNumbers(long long a) {
    int br = 0;
    double m = sqrt(a);
    for(int i = 1; i < m; i++) if(a % i == 0) br += 2;
    if(sqrt(a) == trunc(sqrt(a))) br++;
    return br;
}

int main() {
    int a, b, k = 0;
    double m;
    cin >> a >> b;
    vector <int> vecA;
    vector <int> vecB;
    int dab = divisorNumbers((long)a*b);
    m = sqrt(a);
    for(int i = 1; i < m; i++)
        if(a % i == 0) {
            vecA.push_back(i);
            vecA.push_back(a/i);
        }
    if(sqrt(a) == trunc(sqrt(a))) vecA.push_back(sqrt(a));
    m = sqrt(b);
    for(int i = 1; i < m; i++)
        if(b % i == 0) {
            vecB.push_back(i);
            vecB.push_back(b/i);
        }
    if(sqrt(b) == trunc(sqrt(b))) vecB.push_back(sqrt(b));
    int dela, delb;
    for(int x = 0; x < vecA.size(); x++)
        for(int y = 0; y < vecB.size(); y++) {
            dela = divisorNumbers(vecA[x]);
            delb = divisorNumbers(vecB[y]);
            if(dab % (dela + delb) == 0) k++;
        }
    cout << k;

    return 0;
}
