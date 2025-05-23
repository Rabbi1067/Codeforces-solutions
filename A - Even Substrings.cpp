#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<n;i++){
            int digit=s[i]-'0';
        if(digit%2==0){
            cnt+=(i+1);
        }
    }
    cout<<cnt<<endl;
    return 0;
}
