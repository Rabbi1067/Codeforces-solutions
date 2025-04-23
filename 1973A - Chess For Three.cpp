#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

 int t; cin>>t;
 while(t--){
    int x,y,z;
    cin>>x>>y>>z;
    long long sum=x+y+z;
    if(sum%2!=0){
       cout<<-1<<endl;
       continue;
    }
   long long draw;
   if(z>x+y) draw=x+y;
   else draw=sum/2;
   cout<<draw<<endl;
   
   
   
 }

}
