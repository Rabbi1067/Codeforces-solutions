#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int zero=0,one=0;
    for(int i=0;i<s.size();i++){
      if(s[i]=='0') zero++;
      else one++;
    }
    int ans=min(zero,one);
    if(ans%2!=0) cout<<"DA"<<endl;
    else cout<<"NET"<<endl;
  }
  return 0;
}
