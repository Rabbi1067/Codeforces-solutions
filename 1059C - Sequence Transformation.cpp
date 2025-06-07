

#include<bits/stdc++.h>

using namespace std;

typedef  long long ll;

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,N;
    cin>>n;
    int x=1;

    while(n)
    {
        for(int i=1;i<=(n-(n/2));i++)
        {
            cout<<x<<" ";
        }
        
        if(n==3)
        {
            cout<<(3*x)<<" ";
            break;
        }
        n=n>>1;
        x=2*x;
    }

    return 0;
}
