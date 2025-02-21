#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(1){
    int sum=0,b=n;
    while(0<b){
        sum=sum+(b%10);
        b=b/10;
    }
    if(sum%4==0){
        cout<<n<<endl;
        break;
    }
    n++;
}
}
