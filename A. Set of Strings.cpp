#include<bits/stdc++.h>
using namespace std;
int main()
{
  int k;
  string s;
  cin>>k>>s;
  set<char>st;
  for(int i=0;i<s.size();i++)
  {
    st.insert(s[i]);
  }
  if(st.size() < k)
  {
    cout<<"NO"<<endl;
  }
  else
  {
    cout<<"YES"<<endl;
    map<char,int>mpp;
    mpp[s[0]]=1;
    int n=1;
    for(int i=0;i<s.size();i++)
    {
      cout<<s[i];
      if(n<k && (s[i]!=s[i+1]) && (mpp[s[i+1]]!=1))
      {
        cout<<endl;
        n++;
        mpp[s[i+1]]=1;
      }
    }
  }
}
