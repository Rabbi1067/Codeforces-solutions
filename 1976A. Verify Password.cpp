#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<char>c1,c2;
    long long f=0,cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]>='0' && s[i]<='9' && f==0){
            c1.push_back(s[i]);
        }
        else if(s[i]>='a' && s[i]<='z'){
            f=1;
            c2.push_back(s[i]);
        }
        else{
            cnt=1;
            break;
        }
    }
    if(cnt==1){
        cout<<"NO"<<endl;
    }
    else{
        if(is_sorted(c1.begin(),c1.end()) && is_sorted(c2.begin(),c2.end())){
            cout<<"YES"<<endl;
        }else{
        cout<<"NO"<<endl;
        }
    }
}
return 0;
}
