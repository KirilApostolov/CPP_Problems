#include <bits/stdc++.h>
using namespace std;

int main () {
    string st = "", input;
    getline(cin, input);
    vector<string> res, ok;
    for(int j = 0; j < input.size(); j++){
        if (input[j] == '!'){
            res.push_back(st);
            for(int i = 0; i < res.size(); i++) reverse(res[i].begin(), res[i].end());
            res[res.size() - 1] += '!';
            for(int i = 0; i < res.size(); i++) ok.push_back(res[i]);
            res.clear();
            st = "";
            continue;
        }
        if (input[j] == '?'){
            res.push_back(st);
            reverse(res.begin(), res.end());
            res[res.size() - 1] += '?';
            for(int i = 0; i < res.size(); i++) ok.push_back(res[i]);
            res.clear();
            st = "";
            continue;
        }
        if (input[j] == ' '){
            if(st != "") res.push_back(st);
            st = "";
            continue;
        }
        st += input[j];
    }
    for(int i = 0; i < ok.size(); i++) cout << ok[i] << " ";
    return 0;
}

