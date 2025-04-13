#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
 
        int center = 0;
        int l_prime = center - m / 2;
        int r_prime = l_prime + m;
 
       
        if (l_prime < l) {
            r_prime += (l - l_prime);
            l_prime = l;
        }
        if (r_prime > r) {
            l_prime -= (r_prime - r);
            r_prime = r;
        }
 
        cout << l_prime << " " << r_prime << '\n';
    }
    return 0;
}

