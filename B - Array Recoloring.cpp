#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
    while(t--){
      int n,k;
      cin>>n>>k;
      vector<int>s(n);
      for(int i=0;i<n;i++) 
      {
        cin>>s[i];
      }
      if(k>1){
      sort(s.rbegin(),s.rend());
      long long sum = 0;
      for(int i=0;i<=k && k<n;i++)
      { 
        sum+=s[i];
      }
      cout<<sum<<endl;
      }
      else
      {
        int sum = s[0]+s[n-1];
        for(int i=1;i<n-1;i++)
         sum=max(sum,s[i]+max(s[0],s[n-1]));
        cout<<sum<<endl;
      }
    }
    return 0;
}
