#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int ans=INT_MAX;
while(n--){
    int a;
    cin>>a;
    ans=min(ans,abs(a));
}
cout<<ans<<endl;
return 0;
}
