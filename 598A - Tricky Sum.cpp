#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long total_sum = n * (n + 1) / 2;
        long long power_sum = 0;
        long long p = 1;
        while (p <= n) {
            power_sum += p;
            p *= 2;
        }

        cout << total_sum - 2 * power_sum << endl;
    }

    return 0;
}
