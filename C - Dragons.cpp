#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    vector<pair<int, int>> c(b);

    for (int i = 0; i < b; i++) {
        cin >> c[i].first >> c[i].second;
    }

    sort(c.begin(), c.end());
    for (int i = 0; i < b; i++) {
        int dragonStrength = c[i].first;
        int bonusStrength = c[i].second;
        if (a <= dragonStrength) {
            cout << "NO" << endl;
            return 0;
        }

        a += bonusStrength;
    }

    cout << "YES" << endl;
    return 0;
}
