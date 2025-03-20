#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int l, r;
        cin >> l >> r;
        
        int luck = -1;
        int count = l;
        
        for (int i = l; i <= r; ++i) {
            int x = i;
            int maxDigit = INT_MIN;
            int minDigit = INT_MAX;
            
           
            while (x > 0) {
                int digit = x % 10;
                maxDigit = max(maxDigit, digit);
                minDigit = min(minDigit, digit);
                x /= 10;
            }
            
            int diff = maxDigit - minDigit;
            
      
            if (diff > luck || 
                (diff == luck && i > count)) {
                luck = diff;
                count = i;
            }
           
            if (luck == 9) {
                count = i; 
                break;
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}
