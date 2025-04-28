#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
 
while(t--){
        int n;
cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
     vector<long long> sum(n + 1, 0);
        for (int i = n - 1; i >= 0; i--) {
            sum[i] = sum[i + 1] + a[i];
        }
    vector<long long>maxx(n+1,LLONG_MIN);
    for(int i=0;i<n;++i){
        maxx[i+1]=max(maxx[i],a[i]);
    }
 
     for (int k = 1; k <= n; ++k) {
            long long ans=sum[n-k];
            if (n - k > 0) {
                ans = max(ans, sum[n - k+1] + maxx[n-k]);
            }
            cout << ans << " ";
        }
        cout << endl;
}
}
