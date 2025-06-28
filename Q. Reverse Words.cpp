#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    getline(cin, s); 

    int n = s.length();
    int start = 0;

    for (int i = 0; i <= n; ++i) {
      
        if (i == n || s[i] == ' ') {
            reverse(s.begin() + start, s.begin() + i);
            start = i + 1; 
        }
    }

    cout << s << endl;
    return 0;
}
