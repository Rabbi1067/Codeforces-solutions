#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long int n,minn,mixx;
    cin>>n;
    if(n<4 || n%2==1) cout<<-1<<endl;
    else{
             minn = n/6;
            if(n%6!=0) minn++;
            
            mixx = n/4;

            cout<<minn<<" "<<mixx<<endl;
    }
  }
  
  return 0;
}
