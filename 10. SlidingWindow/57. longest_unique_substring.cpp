#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Find length of longest substring without repeating characters.

Approach:
- Sliding window with last occurrence index

Time Complexity:
- O(n)

Space Complexity:
- O(1)
*/

int longestUnique(string s) {
    vector<int> last(256, -1);
    int l = 0, maxLen = 0;

    for (int r = 0; r < s.size(); r++) {
        if (last[s[r]] >= l)
            l = last[s[r]] + 1;

        last[s[r]] = r;
        maxLen = max(maxLen, r - l + 1);
    }
    return maxLen;
}

int main() {
    int t; cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << longestUnique(s) << endl;
    }
    return 0;
}
