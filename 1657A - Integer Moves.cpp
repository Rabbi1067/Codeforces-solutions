#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--){
    int a,b;
    cin>>a>>b;
    long long x=a*a+b*b;
    if(x==0) {
      cout<<0<<endl;
    continue;}
    long long s=sqrt(x);
   if(s*s==x) cout<<1<<endl;
    else cout<<2<<endl;
    
    
  }
    return 0;
}
