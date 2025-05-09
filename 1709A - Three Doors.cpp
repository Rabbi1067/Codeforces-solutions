#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int keys[4]; 
        keys[1] = keys[2] = keys[3] = 0;
        for (int i = 1; i <= 3; ++i) {
            int k;
            cin >> k;
            keys[i] = k;
        }

        int first = x;
        int second = keys[first];
        if (second == 0) {
            cout << "NO" << endl;
            continue;
        }
        int third = keys[second];
        if (third == 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
