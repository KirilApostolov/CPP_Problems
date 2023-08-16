#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<char> stack1;
    string st;
    cin >> st;
    for(int i; i < st.length(); i++) stack1.push(st[i]);
    while (!stack1.empty()) {
        cout << stack1.top();
        stack1.pop();
    }
}
