#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,s;
    cin>>n>>s;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=a[0];
    int r=a[n-1];
    int d=r-l;
    int extra=min(abs(s-l),abs(s-r));
    cout<<d+extra<<endl;
}

return 0;
}
