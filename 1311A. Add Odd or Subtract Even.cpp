
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int a,b;
    cin>>a>>b;
    int diff=b-a;
    if(diff==0) cout<<"0"<<endl;
    else if ((diff > 0 && diff % 2 == 1) || (diff < 0 && diff % 2 == 0)){
        cout<<"1"<<endl;
    }
    else{
        cout<<"2"<<endl;
    }
}
return 0;
}

