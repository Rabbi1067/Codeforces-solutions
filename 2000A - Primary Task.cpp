#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    unordered_set<int> possible;
    for (int x = 2; x <= 100; ++x) {
        string form = "10" + to_string(x);
        int num = stoi(form);
        if (num <= 10000) {
            possible.insert(num);
        }
    }

    while (t--) {
        int a;
        cin >> a;
        if (possible.count(a)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
