#include<bits/stdc++.h>
using namespace std;
int main(){

      long long int n,m;
      cin>>n>>m;
      int cnt=0;
      for(int i=1;i<=n;i++){
        if(m%i==0 && (m/i)<=n){ //j<=n
            cnt++;
        }
      }
     cout<<cnt<<endl;
}

