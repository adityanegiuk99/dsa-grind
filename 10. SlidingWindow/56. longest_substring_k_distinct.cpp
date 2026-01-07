#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Find longest substring with at most k distinct characters.

Approach:
- Sliding window + hashmap
- Shrink window when distinct count > k

Time Complexity:
- O(n)

Space Complexity:
- O(1)
*/

int longestKDistinct(string s, int k) {
    unordered_map<char, int> freq;
    int l = 0, maxLen = 0;

    for (int r = 0; r < s.size(); r++) {
        freq[s[r]]++;
        while (freq.size() > k) {
            if (--freq[s[l]] == 0) freq.erase(s[l]);
            l++;
        }
        maxLen = max(maxLen, r - l + 1);
    }
    return maxLen;
}

int main() {
    int t; cin >> t;
    while (t--) {
        string s; int k;
        cin >> s >> k;
        cout << longestKDistinct(s, k) << endl;
    }
    return 0;
}
