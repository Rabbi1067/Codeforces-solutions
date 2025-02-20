#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, count = 0;
        cin >> n;
        for (int i = 1; i * i <= n; i++) {
            count++;
        }
        for (int i = 1; i * i * i <= n; i++) {
            count++;
        }
        for (int i = 1; i * i * i * i * i * i <= n; i++) {
            count--;
        }

        cout << count << endl;
    }
    return 0;
}

