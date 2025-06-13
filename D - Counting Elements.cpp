#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_set<int> elements;
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        elements.insert(a[i]);
    }
    
    int count = 0;
    for (int num : a) {
        if (elements.find(num + 1) != elements.end()) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}
