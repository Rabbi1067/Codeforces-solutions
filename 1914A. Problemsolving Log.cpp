#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int>ma;
        for(int i=0; i<n; i++)
        {
            ma[s[i]]++;
        }
        int cnt=0;
        for(auto ct:ma)
        {
            if(ct.second>=(ct.first-'A'+1))
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
