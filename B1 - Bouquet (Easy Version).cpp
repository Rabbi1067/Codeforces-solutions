#include<bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
      long long int n,m;
      cin>>n>>m;
      long long sum=0;
      vector<long long>f(n);
      for(int i=0;i<n;i++){
        cin>>f[i];
      }
      sort(f.begin(),f.end());
      long long l=0,ans=0;
      for(int r=0;r<n;r++){
        sum+=f[r];
        while(f[r]-f[l]>1|| sum>m){
            sum-=f[l];
            l++;
        }
        if(sum<=m){
            ans=max(ans,sum);
        }
      }

      cout<<ans<<endl;
        }
}

