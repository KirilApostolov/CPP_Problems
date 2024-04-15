#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    char z; cin >> z;
    long long N[n] = {0};
    string line, ac;
    getline(cin, line);
    for(int i = 0; i < n; i++){
        getline(cin, line);
        string L = "";
        for(int j = 0; j < line.size(); j++) if (line[j] != ' ') L = L + line[j];
        for(int j = 0; j < L.size() / 2; j++){
            ac = "";
            ac += L[2*j];
            ac += L[2*j + 1];
            if(ac == "no") N[i] = 10 * N[i] + 0;
            if(ac == "pa") N[i] = 10 * N[i] + 1;
            if(ac == "re") N[i] = 10 * N[i] + 2;
            if(ac == "ci") N[i] = 10 * N[i] + 3;
            if(ac == "vo") N[i] = 10 * N[i] + 4;
            if(ac == "mu") N[i] = 10 * N[i] + 5;
            if(ac == "xa") N[i] = 10 * N[i] + 6;
            if(ac == "ze") N[i] = 10 * N[i] + 7;
            if(ac == "bi") N[i] = 10 * N[i] + 8;
            if(ac == "so") N[i] = 10 * N[i] + 9;
        }
    }
    long long result = N[0];
    if (z == '+') for(int i = 1; i < n; i++) result += N[i];
    else for(int i = 1; i < n; i++) result -= N[i];
    if(result == 0) {
        cout << "no";
        return 0;
    }
    vector<string> R;
    while (result > 0){
        int cv = result % 10;
        result /= 10;
        if (cv == 0) R.push_back("no");
        if (cv == 1) R.push_back("pa");
        if (cv == 2) R.push_back("re");
        if (cv == 3) R.push_back("ci");
        if (cv == 4) R.push_back("vo");
        if (cv == 5) R.push_back("mu");
        if (cv == 6) R.push_back("xa");
        if (cv == 7) R.push_back("ze");
        if (cv == 8) R.push_back("bi");
        if (cv == 9) R.push_back("so");
    }
    reverse(R.begin(), R.end());
    for(int i = 0; i < R.size(); i++) cout << R[i];
    return 0;
}
