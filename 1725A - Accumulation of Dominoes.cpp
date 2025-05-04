#include<bits/stdc++.h>
using namespace std;
long long ans(long long n,long long m)
{
    if(m==1) return n-1;
    if(n==1) return m-1;
    return (m-1)*n;
}
int main()
{
    long long int m,n;
    cin>>n>>m;
    cout<<ans(n,m)<<endl;
}
