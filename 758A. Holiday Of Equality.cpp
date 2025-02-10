#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int ary[n];
for(int i=0;i<n;i++){
    cin>>ary[i];
}
sort(ary,ary+n);
int cnt=0;
for(int i=0;i<n-1;i++){
    cnt=cnt+(ary[n-1]-ary[i]);
}
cout<<cnt<<endl;
return 0;
}
