#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    for (char ch : s) {
        freq[ch - 'A']++;
    }

    int min_count = freq[0];
    for (int i = 0; i < k; ++i) {
        min_count = min(min_count, freq[i]);
    }
    cout << (min_count * k) << endl;
    return 0;
}
