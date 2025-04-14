#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int totalnumbers=0;
    int currentnumbers=0;
      for(int i=0;i<n;i++) {
        if(a[i]==2)  totalnumbers++;
      }
      int ans=-1;
    for(int i=0;i<n;i++) {
      if(a[i]==2) currentnumbers++;
      if(currentnumbers==(totalnumbers-currentnumbers)){
        ans=i+1;
        break;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}
