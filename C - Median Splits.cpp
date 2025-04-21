#include<bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long k;
        int n;
        cin >> n >> k;

        vector<long long> a(n + 1), pre(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

     
        pre[0] = 0;
        for (int i = 1; i <= n; i++) {
            int c = (a[i] <= k ? 1 : -1);
            pre[i] = pre[i - 1] + c;
        }

        long long total = pre[n];

        long long all = pre[1];
        long long mn_good = (pre[1] >= 0 ? pre[1] : LLONG_MAX);

        bool has_good = (pre[1] >= 0);
        bool found = false;

        for (int r = 2; r < n && !found; r++) {
            long long pr = pre[r];

           
            if ((has_good && mn_good <= pr) || 
                (has_good && pr <= total) || 
                (all <= pr && pr <= total)) {
                found = true;
                break;
            }

         
            if (pr < all) all = pr;
            if (pr >= 0) {
                if (!has_good || pr < mn_good) {
                    mn_good = pr;
                }
                has_good = true;
            }
        }

        cout << (found ? "YES" : "NO") << endl;
    }

    return 0;
}
