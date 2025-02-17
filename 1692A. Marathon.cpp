#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int cnt=0;
    if(a<b) cnt++;
    if(a<c) cnt++;
    if(a<d) cnt++;
    cout<<cnt<<endl;
}



return 0;
}
