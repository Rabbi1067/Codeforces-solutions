#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int a=min(x,(min(y,z)));
        int b=max(x,(max(y,z)));
        int ans=abs(b-a);
        cout<<ans<<endl;

    }
    return 0;
}
