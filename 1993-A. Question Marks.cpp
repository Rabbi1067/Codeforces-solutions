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
    int a=0,b=0,c=0,d=0,q=0;
    for(int i=0;i<s.size();i++){
            if (s[i] == 'A') a++;
            else if (s[i] == 'B') b++;
            else if (s[i] == 'C') c++;
            else if (s[i] == 'D') d++;
            else if (s[i] == '?') q++;
    }
    int a1=min(a,n);
    int b1=min(b,n);
    int c1=min(c,n);
    int d1=min(d,n);
    int total=a1+b1+c1+d1;
    cout<<total<<endl;
}
}
