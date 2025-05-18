#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
      vector<int>a(n);
        int cnt=0;
        int zero =0;
        int one=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0)zero=1;
            else one=1;
        }
        for(int i=1;i<n;i++){

            if(a[i-1]==a[i] and a[i]==0){
              cnt=1;}
        }
        if(!zero || !one || cnt)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
