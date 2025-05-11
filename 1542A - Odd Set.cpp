#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a;
    int count =0;
    for(int i=0;i<2*n;i++){
        cin>>a;
        count =count + (a%2);
    }
    if(count == n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}
