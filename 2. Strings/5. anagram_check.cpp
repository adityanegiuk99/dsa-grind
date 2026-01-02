#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Check whether two strings are anagrams.

Input:
- t test cases
- For each test case: strings s1 and s2

Output:
- YES or NO

Approach:
- Count frequency of characters
- Compare frequency arrays

Edge Cases:
- Different lengths

Time Complexity:
- O(n)

Space Complexity:
- O(1)
*/

bool isAnagram(string s1, string s2) {
    if (s1.size() != s2.size()) return false;
    vector<int> freq(26, 0);
    for (char c : s1) freq[c - 'a']++;
    for (char c : s2) freq[c - 'a']--;
    for (int x : freq) if (x != 0) return false;
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        cout << (isAnagram(s1, s2) ? "YES" : "NO") << endl;
    }
    return 0;
}
