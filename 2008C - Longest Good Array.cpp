#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while(t--) {
        int l, r; 
        cin >> l >> r;
        long long low = 1, high = 2e9, ans = 1;

        while (low <= high) {
            long long mid = (low + high) / 2;
            long long required = (mid - 1) * mid / 2;
            if (l + required <= r) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        cout << ans << endl;
    }
}
