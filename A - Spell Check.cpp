#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        if (n != 5) {
            cout << "NO" << endl;
            continue;
        }

        sort(s.begin(), s.end());
        string correct = "Timur";
        sort(correct.begin(), correct.end());

        if (s == correct) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
