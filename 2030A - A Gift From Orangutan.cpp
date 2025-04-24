#include<bits/stdc++.h>
using namespace std;

int main() {
   
  long long t,n;
  cin>>t;
    
    while (t--) {
        cin >> n;
        vector<int>a(n+5);
        
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        
        sort(a.begin()+1,a.begin()+n+1);
        
        int max1 = a[n], min1 = a[n];
        long long ans = 0;
        
        for (int i = 1; i < n; i++) {
            min1 = min(min1, a[i]);
            ans += max1 - min1;
        }
        
        cout << ans <<endl;
    }
    
    
    
    
    
    
    
    
    return 0;
}
