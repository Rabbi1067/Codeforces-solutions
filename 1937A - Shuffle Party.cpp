#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int s=1;
        while(2*s<=n) s*=2;
        cout<<s<<endl;
    }
    return 0;
}
