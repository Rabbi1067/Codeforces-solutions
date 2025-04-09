#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string r1, r2;
        cin >> r1 >> r2;

        bool ans = true;
        for (int i = 0; i < n; ++i) {
            char ch1 = (r1[i] == 'G') ? 'B' : r1[i];
            char ch2 = (r2[i] == 'G') ? 'B' : r2[i];
            if (ch1 != ch2) {
                ans = false;
                break;
            }
        }

        cout << (ans ? "YES\n" : "NO\n");
    }
    return 0;
}
