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
    int positive=0;
    int negative=0;
      for(int i=0;i<n;i++) {
        if(a[i]==1) positive++;
        else negative++;
      }
      int ans=0;
      while(positive <negative || negative % 2==1){
        ans++;
        positive++;
        negative--;
      }
      cout<<ans<<endl;
  }
  return 0;
}
