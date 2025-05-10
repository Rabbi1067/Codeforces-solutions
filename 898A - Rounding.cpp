#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
   cin>>n;
  long long d=n%10;
 if(d <= 5){
        n -= d;
    }
    else{
        n += (10 - d);
    }
    cout<<n<<endl;
        
}
