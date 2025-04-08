#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
 
       long long sum=0,ans=0;
 
        for (char c : s) {
            if (c == '0') {
                sum++;
            } else {
               ans = max(ans,sum + 1);
            }
        }
 
        cout << s.size() - ans << endl;
    }
 
    return 0;
}
