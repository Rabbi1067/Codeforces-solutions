#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int hikes = 0, i = 0;
        while (i <= n - k) {
            bool c = true;
            
            for (int j = i; j < i + k; ++j) {
                if (a[j] != 0) {
                    c = false;
                    break;
                }
            }

            if (c) {
                hikes++;
                i += k + 1; 
            } else {
                i++;
            }
        }

        cout << hikes << endl;
    }

    return 0;
}
