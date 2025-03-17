#include<bits/stdc++.h>
using namespace std;

int main(){
  
    int t;
    cin >> t;
    
    while(t--){
        int a, b;
        cin >> a >> b;

        vector<int> count(a + 1, 0);
        vector<int> c(b);
        for (int i = 0; i < b; i++){
            cin >> c[i];
            count[c[i]]++;
        }

        vector<int> d(a + 2, 0);
        for (int i = a; i >= 1; i--){
            d[i] = count[i] + d[i + 1];
        }
     
        long long ans = 0;

        for (int e = 1; e < a; e++){
            int f = d[e];
            int g = d[a - e];
            int h = d[max(e, a - e)];
            ans += static_cast<long long>(f) * g - h;
        }
    
        cout << ans << endl;
    }
    
    return 0;
}
