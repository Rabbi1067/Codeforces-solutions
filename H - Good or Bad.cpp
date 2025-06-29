#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T; // number of test cases
    while (T--) {
        string S;
        cin >> S;
        // Check for "010" or "101" in the string
        if (S.find("010") != string::npos || S.find("101") != string::npos) {
            cout << "Good" << endl;
        } else {
            cout << "Bad" << endl;
        }
    }
    return 0;
}
