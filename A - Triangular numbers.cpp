
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool isTriangular = false;

    for (int k = 1; k * (k + 1) / 2 <= n; ++k) {
        if (k * (k + 1) / 2 == n) {
            isTriangular = true;
            break;
        }
    }

    if (isTriangular)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
