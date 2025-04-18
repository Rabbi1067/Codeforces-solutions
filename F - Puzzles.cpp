#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int f[50];

    for (int i = 0; i < m; i++) {
        cin >> f[i];
    }

    sort(f, f + m);

    int min_diff = 1001; 

    for (int i = 0; i <= m - n; i++) {
        int diff = f[i + n - 1] - f[i];
        if (diff < min_diff) {
            min_diff = diff;
        }
    }

    cout << min_diff << endl;
    return 0;
}
