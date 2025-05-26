#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
    string s;
    int n,k;
    cin>>n>>k>>s;
     int zeros = count(s.begin(), s.end(), '0');
        int ones = n - zeros;

        int pocha = n / 2 - k;
        bool possible((zeros >=pocha) && (ones>=pocha));
        possible &= ((zeros - pocha) % 2 == 0);
        possible &= ((ones - pocha) % 2 == 0);
        cout<<(possible?"YES\n" : "NO\n");
    }
    return 0;
}
