#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        set<char> digits;
        string sx = to_string(x);
        for (char c : sx) {
            digits.insert(c);
        }
        for (int y = 0; ; ++y) {
            string sy = to_string(y);
            for (char c : sy) {
                if (digits.count(c)) {
                    cout << y << endl;
                    goto next_case;
                }
            }
        }

        next_case:;
    }

    return 0;
}
