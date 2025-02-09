#include <bits/stdc++.H>
using namespace std;

int main()
{
    int t;
    cin >> t;
    char w[11], plural[11];

    while (t--)
    {
        cin >> w;
        int len = 0;
        while (w[len] != '\0')
        {
            len++;
        }

        for (int i = 0; i < len - 2; i++)
        {
            plural[i] = w[i];
        }
        plural[len - 2] = 'i';
        plural[len - 1] = '\0';

        cout << plural << "\n";
    }

    return 0;
}

