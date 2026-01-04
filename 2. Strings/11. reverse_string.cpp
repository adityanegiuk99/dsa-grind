#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Reverse the given string.

Input:
- t test cases
- For each test case: a string s

Output:
- Reversed string

Approach:
- Use two pointers from start and end
- Swap characters until pointers cross

Edge Cases:
- Empty string
- Single character

Time Complexity:
- O(n)

Space Complexity:
- O(1)
*/

string reverseString(string s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        swap(s[l], s[r]);
        l++;
        r--;
    }
    return s;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << reverseString(s) << endl;
    }
    return 0;
}
