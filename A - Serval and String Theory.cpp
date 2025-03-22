#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (n == 1)
        {
            cout << "NO"<<endl;
            continue;
        }


        bool all = true;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[0])
            {
                all = false;
                break;
            }
        }

        if (all)
        {
            cout << "NO"<<endl;
            continue;
        }

        bool universal = false;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - 1 - i])
            {
                universal = s[i] < s[n - 1 - i];
                break;
            }
        }
        if (universal)
        {
            cout << "YES"<<endl;
            continue;
        }

        if (k >= 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
