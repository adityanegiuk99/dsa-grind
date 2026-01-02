#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Given n-1 numbers from range 1 to n, find the missing number.

Input:
- t test cases
- For each test case:
  - n
  - n-1 integers

Output:
- Missing number

Approach:
- Use sum formula: n*(n+1)/2
- Subtract actual sum from expected sum

Edge Cases:
- Missing first or last number

Time Complexity:
- O(n)

Space Complexity:
- O(1)
*/

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n - 1);
        for (int i = 0; i < n - 1; i++) cin >> arr[i];

        int expected = n * (n + 1) / 2;
        int actual = accumulate(arr.begin(), arr.end(), 0);

        cout << expected - actual << endl;
    }
    return 0;
}
