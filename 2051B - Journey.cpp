#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;
        vector<long long> walk = {a, b, c};
        long long cycle_sum = a + b + c;
        long long l = 1, h = n, ans = n;

        while (l <= h) {
            long long mid = (l + h) / 2;
            long long full_cycles = mid / 3;
            long long remaining_days = mid % 3;
            long long total = full_cycles * cycle_sum;

            for (long long i = 0; i < remaining_days; ++i) {
                total += walk[i];
                if (total >= n) break;
            }

            if (total >= n) {
                ans = mid;
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
