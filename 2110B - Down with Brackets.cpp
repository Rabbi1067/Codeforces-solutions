#include<bits/stdc++.h>
using namespace std;

bool isBalanced(const string &s) {
    int bal = 0;
    for (char c : s) {
        bal += (c == '(') ? 1 : -1;
        if (bal < 0) return false;
    }
    return bal == 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        if (s.size() == 2) {
            cout << "NO\n";
            continue;
        }
        if (s.front() == '(' && s.back() == ')' && isBalanced(s.substr(1, s.size() - 2))) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
