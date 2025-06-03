#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        long long a,b,n,ans = 0;
        cin>>n>>a>>b;
        if(a * 2 < b){
            ans = n * a;
        }
        else{
            long long mod = n % 2;
            ans = (n / 2) * b + (mod * a);
        }
        cout<<ans<<endl;
    }
    return 0;
}
