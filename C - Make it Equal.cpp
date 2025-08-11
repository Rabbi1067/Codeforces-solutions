#include <bits/stdc++.h>
        
        using namespace std;
        int main() {
            ios_base::sync_with_stdio(false);
            cin.tie(0);
            int t;
            cin >> t;
            while (t--) {
                int n;
                long long k;
                cin >> n >> k;
                vector<long long> s(n), arr(n);
                for (int i = 0; i < n; i++) {
                    cin >> s[i];
                }
                for (int i = 0; i < n; i++) {
                    cin >> arr[i];
                }
                vector<long long> baseS, baseT;
                for (long long x : s) {
                    long long r = x % k;
                    if (r == 0) {
                        baseS.push_back(0);
                    } else {
                        baseS.push_back(min(r, k - r));
                    }
                }
                for (long long y : arr) {
                    long long r = y % k;
                    if (r == 0) {
                        baseT.push_back(0);
                    } else {
                        baseT.push_back(min(r, k - r));
                    }
                }
                sort(baseS.begin(), baseS.end());
                sort(baseT.begin(), baseT.end());
                if (baseS == baseT) {
                    cout << "YES\n";
                } else {
                    cout << "NO\n";
                }
            }
            return 0;
        }
