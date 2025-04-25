#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;i++) cin>>a[i];
   int length = 1;
    int c_length = 1;
    
    for (int i = 1; i < a.size(); ++i) {
        if (a[i] > a[i-1]) {
            c_length++;
            length = max(length, c_length);
        } else {
            c_length = 1;
        }
    }
    
    cout<<length<<endl;;
  
  
  
  
  
  return 0;
}
