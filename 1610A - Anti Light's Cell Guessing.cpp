#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, m;
		cin >> n >> m;
		if (n == 1 && m == 1) {
			cout << 0;
		} else if (min(n, m) == 1) {
			cout << 1;
		} else {
			cout << 2;
		}
		cout << '\n';
	}
	return 0;
}
