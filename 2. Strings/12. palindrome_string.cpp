#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Check whether a string is a palindrome.

Input:
- t test cases
- For each test case: string s

Output:
- YES if palindrome, else NO

Approach:
- Compare characters from start and end using two pointers

Edge Cases:
- Single character string

Time Complexity:
- O(n)

Space Complexity:
- O(1)
*/

bool isPalindrome(string s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << (isPalindrome(s) ? "YES" : "NO") << endl;
    }
    return 0;
}
