#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt_a=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a') cnt_a++;
    }
    int total=s.size();
    int res=min(total,2*cnt_a-1);
    cout<<res<<endl;
    return 0;
}
