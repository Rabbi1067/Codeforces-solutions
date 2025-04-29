#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>ary;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        ary.push_back(a);
    }
    sort(ary.begin(),ary.end());
    int ans=abs(ary[0] - ary[n-1]) + abs(ary[n-1] - ary[1]) + abs(ary[1] - ary[n-2]) + abs(ary[0] - ary[n-2]);
    cout<<ans<<endl;
}

return 0;
}
