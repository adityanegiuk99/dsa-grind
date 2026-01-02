#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Check if one string is rotation of another.

Approach:
- Concatenate original string with itself
- Check if target exists as substring

Time Complexity:
- O(n)

Space Complexity:
- O(n)
*/

bool isRotation(string s1, string s2) {
    if (s1.size() != s2.size()) return false;
    return (s1 + s1).find(s2) != string::npos;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        cout << (isRotation(s1, s2) ? "YES" : "NO") << endl;
    }
    return 0;
}
