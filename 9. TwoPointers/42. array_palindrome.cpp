#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Check whether an array is a palindrome.

Approach:
- Compare elements from start and end using two pointers

Time Complexity:
- O(n)

Space Complexity:
- O(1)
*/

bool isPalindrome(vector<int>& arr) {
    int l = 0, r = arr.size() - 1;
    while (l < r) {
        if (arr[l] != arr[r]) return false;
        l++;
        r--;
    }
    return true;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << (isPalindrome(arr) ? "YES" : "NO") << endl;
    }
    return 0;
}
