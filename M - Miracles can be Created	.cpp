#include<bits/stdc++.h>
using namespace std;

int main() {
    unsigned int N;
    cin >> N;

    unsigned int totalXOR;
    if (N % 4 == 0) totalXOR = N;
    else if (N % 4 == 1) totalXOR = 1;
    else if (N % 4 == 2) totalXOR = N + 1;
    else totalXOR = 0;

    bool possible = false;
    for (unsigned int i = 0; i <= N; ++i) {
        if ((totalXOR ^ i) > N) {
            possible = true;
            break;
        }
    }

    cout << (possible ? "YES" : "NO") << endl;
    return 0;
}
