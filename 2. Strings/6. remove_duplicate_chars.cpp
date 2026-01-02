#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Remove duplicate characters while maintaining order.

Approach:
- Use visited array
- Append character only if not seen before

Time Complexity:
- O(n)

Space Complexity:
- O(1)
*/

string removeDuplicates(string s) {
    vector<bool> seen(256, false);
    string result = "";
    for (char c : s) {
        if (!seen[c]) {
            seen[c] = true;
            result += c;
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << removeDuplicates(s) << endl;
    }
    return 0;
}
