#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> arr(N);
    for (int i = 0; i < N; ++i)
        cin >> arr[i];

    for (int i = 0; i < N; i += K) {
        int group_min = INT_MAX;
        for (int j = i; j < i + K && j < N; ++j) {
            group_min = min(group_min, arr[j]);
        }
        cout << group_min << " ";
    }

    cout << endl;
    return 0;
}
