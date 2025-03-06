#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long gap = 0;
        for (int i = 1; i < n; ++i) {
            gap = max(gap, (long long)a[i] - a[i - 1]);//max distance
        }
        gap = max(gap, (long long)a[0]);//1st gas station
        gap = max(gap, (long long)(x - a[n - 1]) * 2);//last gas station
        cout << gap << endl;
    }
    return 0;
}
