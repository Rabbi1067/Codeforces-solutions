#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (!(cin >> t)) return 0; 
    while (t--) {
        int n;
        cin >> n; 
        string s;
        cin >> s; 

        int M = 0, c01 = 0, c10 = 0;
        char ans = '0';
        
        for (int i = 0; i < n; i++) {
            char cur = s[i];
            if (cur != ans) {
                M++;
                if (ans == '0') c01++;
                else c10++;
            }
            ans = cur;
        }

        int b;

        if (c01 >= 2 || c10 >= 2)
            b = 2;
        else if (M >= 2)
            b = 1;
        else
            b = 0;

        int pri = M - b;

    
        cout << n + pri << endl;
    }

    return 0;
}
