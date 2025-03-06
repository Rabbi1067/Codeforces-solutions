#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        vector<int>s(a);
        for(int i=0; i<a; i++)
        {
            cin>>s[i];
        }
        int ans=0;

        sort(s.begin(),s.end());
        for(int i=0; i<a-1; i++)
        {
            ans=ans+(s[i+1]-s[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
