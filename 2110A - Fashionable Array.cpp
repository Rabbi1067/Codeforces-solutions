#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        int ans = 1; 
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int mn = min(a[i], a[j]);
                int mx = max(a[i], a[j]);

                if ((mn + mx) % 2 == 0) {
                    int count = 0;
                    for (int k = 0; k < n; k++) {
                        if (a[k] >= mn && a[k] <= mx)
                            count++;
                    }
                    ans = max(ans, count);
                }
            }
        }

        cout << n - ans << "\n";
    }

    return 0;
}
