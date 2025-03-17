#include<bits/stdc++.h>
using namespace std;
 
int main(){
   
    int t;
    cin >> t;
    
    while(t--){
    
        long long num, Val;
        cin >> num >> Val;
        long long result = 0;
        
     
        if(num % 2 == 0){
            result = (num + (Val - 1) - 1) / (Val - 1);
          
        } else {
           
            result = 1 + ((num - Val) + (Val - 1) - 1) / (Val - 1);
          
        }
        
        cout << result << "\n";
      
    }
    
    return 0;
}
