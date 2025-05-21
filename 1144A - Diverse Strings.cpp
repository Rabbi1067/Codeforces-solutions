#include<bits/stdc++.h>
using namespace std;
bool Diverse(string s){
    int n=s.length();
     sort(s.begin(),s.end());
     for(int i=1;i<n;i++){
    if(s[i]-s[i-1] !=1){
     return false;
    }
  }
  return true;
}
int main(){
int t;
cin>>t;
while(t--){
  string s;
  cin>>s;
if(Diverse(s))
  cout<<"YES"<<endl;
else 
  cout<<"NO"<<endl;
}
  
  return 0;
}
