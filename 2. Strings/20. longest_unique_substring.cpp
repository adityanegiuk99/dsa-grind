#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Find length of longest substring without repeating characters.

Approach:
- Sliding window using hashmap
- Move left pointer when duplicate found

Time Complexity:
- O(n)

Space Complexity:
- O(1)
*/

int longestUniqueSubstring(string s) {
    vector<int> last(256, -1);
    int left = 0, maxLen = 0;

    for (int right = 0; right < s.size(); right++) {
        if (last[s[right]] >= left)
            left = last[s[right]] + 1;

        last[s[right]] = right;
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << longestUniqueSubstring(s) << endl;
    }
    return 0;
}
