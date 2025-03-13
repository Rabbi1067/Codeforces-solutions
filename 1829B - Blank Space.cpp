#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int count = 0;
        int max_length = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                count++;
                max_length = max(max_length, count);
            } else {
                count = 0; 
            }
        }
        cout << max_length << endl;
    }
    return 0;
}
