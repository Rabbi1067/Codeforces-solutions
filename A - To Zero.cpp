#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
    while(t--){
      int n,m;
      cin>>n>>m;
      if(n%2){
          cout << (n-2)/(m-1)+1 << endl;
      }
      
      else{
        cout << (n+m-2)/(m-1) << endl;
      }
        
    }
    return 0;
}
