#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n%2==0) cout<<-1<<endl;
    else{
        cout<<n<<1;
        for(int i=3;i<=n;i++){
            cout<<i-1;
        }
        cout<<endl;
    }
}
}
