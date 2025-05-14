#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int min_diff = abs(a[0] - a[n - 1]);
    int x = n, x2 = 1;

    for (int i = 0; i < n - 1; ++i) {
        int diff = abs(a[i] - a[i + 1]);
        if (diff < min_diff) {
            min_diff = diff;
            x = i + 1;
            x2 = i + 2;
        }
    }

    cout << x << " " << x2 << endl;
    return 0;
}
