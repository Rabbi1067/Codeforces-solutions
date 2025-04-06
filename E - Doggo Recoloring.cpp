/*#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    vector<int> freq(26, 0); 

    for (char c : s) {
        freq[c - 'a']++;
    }
    for (int count : freq) {
        if (count >= 2 || n == 1) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}*/
// Kotlin 1.9.21 language
fun main() {
    val n = readln().toInt()
    val s = readln()

    val freq = IntArray(26)

    for (c in s) {
        freq[c - 'a']++
    }

    for (count in freq) {
        if (count >= 2 || n == 1) {
            println("Yes")
            return
        }
    }

    println("No")
}
