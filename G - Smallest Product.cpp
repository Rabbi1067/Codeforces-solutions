#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    long double logP = 0.0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        logP += log10((long double)a[i]);
    }

    long long low = 1, high = 1e10, ans = 1e10;
    while (low <= high) {
        long long mid = (low + high) / 2;
        long double logNew = n * log10((long double)mid);

        if (logNew > logP) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
}
