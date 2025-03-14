#include <bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin >> q;
    while (q--) {
       long long a;
       cin>>a;
       int i=1;
       while(a%i==0){
         i++;
       }
        cout<<i-1<<endl;
    }
    
    return 0;
}
