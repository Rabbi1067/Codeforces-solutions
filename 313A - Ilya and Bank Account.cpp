#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n>=0) cout<<n<<endl;
    else{
      int x=n/10;
     int y = (n / 100) * 10 + (n % 10);
      cout<<max(x,y)<<endl;
    }
    return 0;
}
