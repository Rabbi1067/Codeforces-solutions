
#include<bits/stdc++.h>
using namespace std;
int sum(int n){
return (n*(n+1))/2;
}

int main(){
int n;
cin>>n;
int lv=0;
while(1){
    n=n-sum(lv+1);
    if(n>=0) lv++;
    else break;
}
cout<<lv<<endl;
return 0;
}
