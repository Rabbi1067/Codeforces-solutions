#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<bool> s(101, false);
        int ans = 0;
 
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
 
            if (!s[a]) {
                s[a] = true;
                ans++;
            }
        }
 
        cout << ans << endl;
    }
 
    return 0;
}
