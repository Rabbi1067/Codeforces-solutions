#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(const string& s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r])
            return false;
        l++;
        r--;
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    if (!is_palindrome(s)) {
        cout << s.size() << endl;
    } else {
        bool all_same = true;
        for (int i = 1; i < s.size(); ++i) {
            if (s[i] != s[0]) {
                all_same = false;
                break;
            }
        }
        if (all_same) {
            cout << 0 << endl;
        } else {
            cout << s.size() - 1 << endl;
        }
    }
    return 0;
}
