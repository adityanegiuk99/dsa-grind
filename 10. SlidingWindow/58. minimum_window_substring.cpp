#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Find minimum window in s containing all characters of t.

Approach:
- Sliding window with frequency maps
- Expand right, shrink left when valid

Time Complexity:
- O(n)

Space Complexity:
- O(1)
*/

string minWindow(string s, string t) {
    vector<int> freq(256, 0);
    for (char c : t) freq[c]++;

    int count = t.size(), l = 0;
    int minLen = INT_MAX, start = 0;

    for (int r = 0; r < s.size(); r++) {
        if (--freq[s[r]] >= 0) count--;

        while (count == 0) {
            if (r - l + 1 < minLen) {
                minLen = r - l + 1;
                start = l;
            }
            if (++freq[s[l++]] > 0) count++;
        }
    }
    return minLen == INT_MAX ? "" : s.substr(start, minLen);
}

int main() {
    int t; cin >> t;
    while (t--) {
        string s, t2;
        cin >> s >> t2;
        cout << minWindow(s, t2) << endl;
    }
    return 0;
}
