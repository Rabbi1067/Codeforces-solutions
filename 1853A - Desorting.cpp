#include<bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
   int n;
   cin>>n;
   vector<int>a(n);
   for(int i=0;i<n;i++){
     cin>>a[i];
   }
   long long ans=INT_MAX;
   for(int i=0;i<n-1;i++){
     if(a[i]<=a[i+1]){
       long long diff=a[i+1] - a[i];
       long long op=diff/2+1;
       ans=min(ans,op);
     }
     else{
       ans=0;
     }
    
   }
    cout<<ans<<endl;
   }
    return 0;
}
