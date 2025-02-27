#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long x=n/15;
        long long cnt=x*3;
        long long y=n%15;
        if (y >= 0) cnt++;
        if (y >= 1) cnt++;
        if (y >= 2) cnt++;

        cout << cnt << endl;


    }

}
