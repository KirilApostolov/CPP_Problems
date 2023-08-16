#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long long A, B, N;
    cin >> A >> B >> N;
    long long arr[N];
    for (int i = 0; i < N; i++) cin >> arr[i];
    sort(arr, arr + N);
    long long pos = 0;
    while (pos < N && arr[pos] < A) pos++;
    long long jumps = 0, currentPOS = A;
//    cout << "Jump N#" << jumps << " Possition: " << currentPOS << " next " << arr[pos] << endl;
    while (currentPOS < B){
        while (pos < N && arr[pos]%2 != currentPOS%2) pos++;
        if (pos == N || arr[pos] > B){
            jumps = jumps + (B - currentPOS)/2 + (B - currentPOS) % 2;
            currentPOS = B;
//            cout << "------end jump " << endl;
        } else {
            jumps += (arr[pos] - currentPOS)/2;
            currentPOS = arr[pos] - 1;
        }
//        cout << "Jump N#" << jumps << " Possition: " << currentPOS << " next " << arr[pos] << endl;
    }
//    cout << endl;
    cout << jumps;
    return 0;
}
