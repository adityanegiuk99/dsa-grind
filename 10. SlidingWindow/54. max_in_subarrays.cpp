#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Count how many anagrams of pattern p exist in string s.

Approach:
- Sliding window with frequency map
- Maintain count of matched characters

Time Complexity:
- O(n)

Space Complexity:
- O(1)
*/

int countAnagrams(string s, string p) {
    vector<int> freq(26, 0);
    for (char c : p) freq[c - 'a']++;

    int count = p.size(), ans = 0;
    int l = 0;

    for (int r = 0; r < s.size(); r++) {
        if (--freq[s[r] - 'a'] >= 0) count--;

        if (r - l + 1 == p.size()) {
            if (count == 0) ans++;
            if (++freq[s[l] - 'a'] > 0) count++;
            l++;
        }
    }
    return ans;
}

int main() {
    int t; cin >> t;
    while (t--) {
        string s, p;
        cin >> s >> p;
        cout << countAnagrams(s, p) << endl;
    }
    return 0;
}
