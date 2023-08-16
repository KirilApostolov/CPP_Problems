#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int A, B, N;
    cin >> A >> B >> N;
    int arr[N];
    for (int i = 0; i < N; i++) cin >> arr[i];
    sort(arr, arr + N);
    int pos = 0;
    while (pos < N && arr[pos] < A) pos++;
    int jumps = 0, currentPOS = A;
    cout << "Jump N#" << jumps << " Possition: " << currentPOS << " next " << arr[pos] << endl;
    while (currentPOS < B){
        bool bigJump = true;
        if (arr[pos] == currentPOS + 2 ) bigJump = false;
        if (bigJump) currentPOS +=2;
        else currentPOS++;
        jumps++;
        if(pos + 1 != N && arr[pos]<currentPOS) pos++;
        cout << "Jump N#" << jumps << " Possition: " << currentPOS << " next " << arr[pos] << endl;
    }
    cout << jumps;

    return 0;
}
