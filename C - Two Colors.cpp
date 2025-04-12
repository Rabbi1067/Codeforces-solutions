#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(0);
 
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(m);
        for (int i = 0; i < m; ++i) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        long long int ans = 0;
        for (int len1 = 1; len1 < n; ++len1) {
            int len2 = n - len1;
            int cnt1 = a.end() - lower_bound(a.begin(), a.end(), len1);
            int cnt2 = a.end() - lower_bound(a.begin(), a.end(), len2);
            int cnt_both = a.end() - lower_bound(a.begin(), a.end(), max(len1, len2));
            ans += (long long)cnt1 * cnt2 - cnt_both;
        }
        cout << ans << endl;
    }
 
    return 0;
}
