#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if(n <= 1)
        return false;
    if(n == 2)
        return true;
    if(n % 2 == 0)
        return false;
    for(int i = 3; i <= sqrt(n); i += 2)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int a; 
    cin >> a;
    while(a--)
    {
        int b, c;
        cin >> b >> c;
        if(c == 1)
        {
            cout << (prime(b) ? "YES" : "NO") << endl;
        }
        else
        {
            if(b == 1 && c == 2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
