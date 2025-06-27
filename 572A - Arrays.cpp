#include<bits/stdc++.h>
using namespace std;

int main() {
   
    ios_base::sync_with_stdio(false);
   cin.tie(NULL);

    int A, B;
    cin >> A >> B;

    int k, m;

    cin >> k >> m;

    vector<long long> a(A);
    for (int i = 0; i < A; ++i) {
        cin >> a[i];
    }

   vector<long long> b(B);
    for (int i = 0; i < B; ++i) {
       cin >> b[i];
    }

    long long max_A = a[k - 1];

    long long min_B = b[B - m];

   
    if (max_A < min_B) {
       cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
