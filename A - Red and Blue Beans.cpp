#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
   while(t--){
int l,b,d;
cin>>l>>b>>d;
int m=min(l,b);
int dif=abs(l-b);
int ans=(dif+m-1)/m;
if(ans<=d) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
   }
return 0;
}
