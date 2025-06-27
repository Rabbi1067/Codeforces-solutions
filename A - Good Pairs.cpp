#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int minIdx = 0, maxIdx = 0;
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] < a[minIdx]) minIdx = i;
            if (a[i] > a[maxIdx]) maxIdx = i;
        }
    
        cout << minIdx + 1 << " " << maxIdx + 1 << "\n";
    }
    return 0;
}
