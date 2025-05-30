#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n), b(n);
    long long totalCola = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        totalCola += a[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    sort(b.begin(), b.end());

    long long max1 = b[n - 1];
    long long max2 = b[n - 2];

    if (totalCola <= max1 + max2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
