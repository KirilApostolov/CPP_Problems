#include <iostream>
using namespace std;
int main(){
    string st;
    long long n = 0;
    cin >> st;
    long long before[10] = {0}, after[10] = {0};
    before[st[0]-'0']++;
    for(int i = 2; i < st.length(); i++) after[st[i]-'0']++;
    for(long long i = 1; i < st.length() - 1; i++){
        long long bb = 0;
        for(int i1 = 1; i1 < st[i]-'0'; i1++) bb += before[i1];
        long long aa = 0;
        for(int i1 = st[i]-'0' +1; i1 < 10; i1++) aa += after[i1];
        n += bb * aa;
        before[st[i]-'0']++;
        after[st[i+1]-'0']--;
    }
    cout << n;
    return 0;
}
