#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    int one=0,zero=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') one++;
        else zero++;
    }
    
    if(zero!=one){
        cout<<1<<endl;
        cout<<s<<endl;
    }
    else{
        cout<<2<<endl;
        cout<<s[0]<<" ";
        for(int i=1; i<n; i++){
            cout<<s[i];
        }
        
    }
    return 0;
}
