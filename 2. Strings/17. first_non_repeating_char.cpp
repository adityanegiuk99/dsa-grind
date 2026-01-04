#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Find first character that appears only once.

Approach:
- Count frequency
- Traverse again to find first with freq 1

Time Complexity:
- O(n)

Space Complexity:
- O(1)
*/

char firstNonRepeating(string s) {
    vector<int> freq(256, 0);
    for (char c : s) freq[c]++;
    for (char c : s) if (freq[c] == 1) return c;
    return '-';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        char ans = firstNonRepeating(s);
        cout << (ans == '-' ? "-1" : string(1, ans)) << endl;
    }
    return 0;
}
