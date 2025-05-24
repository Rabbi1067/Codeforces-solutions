#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   while(n--){
    string s,t,result;
    cin>>s>>t;
    int max_len=max(s.size(),t.size());
    for(int i=0;i<max_len;i++){
        if(i<s.size()){
                result=result+s[i];
    }
       if(i<t.size()){
                result=result+t[i];
    }
   }
   cout<<result<<endl;
   }
    return 0;
}
