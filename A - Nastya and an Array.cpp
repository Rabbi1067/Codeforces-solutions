#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,a;
   cin>>t;
   unordered_set<int> nzero;
   for(int i=0;i<t;i++){
    cin>>a;
    if(a!=0){
        nzero.insert(a);
    }
   }
   cout<<nzero.size()<<endl;
    return 0;
}
