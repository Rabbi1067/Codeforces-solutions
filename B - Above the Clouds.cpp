#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    string s;
    cin>>n>>s;
    bool f=false;
    for(int i=1;i<n-1;i++){
      string a=s.substr(0,i);
      string b=s.substr(i,1);
      string c=s.substr(i+1);
      char ch=s[i];
      for(int j=0;j<n;j++){
        if(j!=i &&  s[j] == ch){
          f=true;
          break;
        }
      }
    }
     cout << (f ? "Yes" : "No") << endl;
  }
  

}
