#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

 int t; cin>>t;
 while(t--){
      long long n,k;
        cin >> n >> k;
        vector<long long>a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        sort(a.rbegin(),a.rend());
        long long max1 = a[0];
        long long max2 = a[1];

        long long sum = max1 + max2;
        long long r = k / sum;
        long long ans = k % sum;

        int x = r * 2;
        if (ans == 0) {
  
        } else if (ans <= max1) {
            x += 1;
        } else {
            x += 2;
        }

      cout<<x<<endl;
    }

}
