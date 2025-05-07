#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
      int m=INT_MAX;
    for(int i=0;i<n;i++){
      cin>>a[i];
      m=min(m,a[i]);
    }
   long long  int ans=0;
  
     for(int i=0;i<n;i++){
          
         ans+=a[i]-m;
    }
    cout<<ans<<endl;
  }
  return 0;
}
