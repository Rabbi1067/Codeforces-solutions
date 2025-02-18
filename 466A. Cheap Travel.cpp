#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int x = n * a;
    int y = ((n + m - 1) / m) * b;
    int z = (n / m) * b + (n % m) * a;
    int ans = min(x,min(y,z));
    cout << ans << endl;
    return 0;
}
