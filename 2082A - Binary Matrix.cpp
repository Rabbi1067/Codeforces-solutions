#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<string> ma(n);
        for (int i = 0; i < n; i++) {
            cin >> ma[i];
        }

        vector<int> row(n, 0);
        vector<int> col(m, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int value = ma[i][j] - '0';
                row[i] ^= value;
                col[j] ^= value;
            }
        }

        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++) {
            if (row[i] == 1) cnt1++;
        }
        for (int j = 0; j < m; j++) {
            if (col[j] == 1) cnt2++;
        }

        cout << max(cnt1, cnt2) << endl;
    }

    return 0;
}
