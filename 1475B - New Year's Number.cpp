#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int x=n%2020;
    int y=n/2021;
    if(x<=y) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}
