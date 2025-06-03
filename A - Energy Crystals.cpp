#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--) {
    int x;
    cin >> x;
    int a = 0, b = 0, c = 0;
    int ans = 0;
    while (a < x) {
      a = min(x, 2 * b + 1);
      swap(a, b);
      swap(b, c);
      ans += 1;
    }
    cout << ans << endl;
  }
  return 0;
}
