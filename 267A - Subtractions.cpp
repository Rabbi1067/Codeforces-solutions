#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long a,b;
    cin>>a>>b;
    int c=0;
    while(a!=0 && b!=0){
        if(a>=b){
            c+=a/b;
            a=a%b;
        }
         else{
            c+=b/a;
            b=b%a;
        }
    }
    cout<<c<<endl;
}
return 0;
}
