
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,a,b;
    cin>>n>>a>>b;
    if(2*a<b) cout<<n*a<<endl;
    else{
        int x=n/2;
        int y=n%2;
        cout<<b*x + y*a<<endl;
    }
    
}
}

