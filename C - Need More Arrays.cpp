#include <bits/stdc++.h>
using namespace std;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long  n;
        cin >> n;
        vector<long long > a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long  cnt = 0;
       long long  finish = -1;
        for (long  x : a)
        {
            if (x - finish >= 2)
            {
                ++cnt;
                finish = x;
            }
        }

        cout << cnt << endl;;
    }
    return 0;
}
