#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int feq[26]={0};
      for (int i = 0; i < n; i++) {
            feq[s[i] - 'a']++;
        }
    int count=0;
      for (int i = 0; i < 26; i++) {
            if (feq[i] % 2 != 0) count++;
        }
        if (count <= k + 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
}
return 0;
}
