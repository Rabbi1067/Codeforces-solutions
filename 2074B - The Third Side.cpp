#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int a;
    cin>>a;
    vector<int>s(a);
    int sum=0;
    for(int i=0;i<a;i++){
        cin>>s[i];
        sum=sum+s[i];
    }
    cout<<sum-(a-1)<<endl;
}
}



