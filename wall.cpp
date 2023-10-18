#include <iostream>

using namespace std;

int bb[5];

int main() {
    int data[4];
    for(int i = 0; i < 4; i++){
        cin >> data[i];
        bb[data[i]]++;
    }
    if (bb[0] == 0) cout << data[0] << " " << data[1];
    if (bb[0] == 1) {
        int c;
        for (int i = 1; i < 5; i ++)
            if (bb[i] == 0) c = i;
        for (int i = 0; i < 4; i ++)
            if(data[i] == 0)
                cout << i + 1 << " " << c;
    }
    if (bb[0] == 2)
        for (int i = 1; i < 5; i ++)
            if (bb[i] == 0) cout << i << " ";
    return 0;
}
