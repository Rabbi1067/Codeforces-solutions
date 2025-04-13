#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
 
        vector<vector<int>> r(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> r[i][j];
            }
        }
 
        vector<int> p(2 * n + 1, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int s = i + j + 2;
                if (!p[s]) p[s] = r[i][j];
            }
        }
 
        vector<bool> u(2 * n + 1, false);
        for (int s = 2; s <= 2 * n; s++) {
            u[p[s]] = true;
        }
 
        int ans = 0;
        for (int num = 1; num <= 2 * n; num++) {
            if (!u[num]) {
               ans = num;
                break;
            }
        }
 
        p[1] = ans;
        for (int i = 1; i <= 2 * n; i++) {
            cout << p[i] << " ";
        }
 
        cout << endl;
    }
 
    return 0;
}
