#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Move all zero elements to the end of the array while maintaining order of non-zero elements.

Input:
- t test cases
- For each test case:
  - n
  - n integers

Output:
- Modified array

Approach:
- Use a pointer to place non-zero elements
- Swap current non-zero with pointer position

Edge Cases:
- No zeros
- All zeros

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
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        int idx = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                swap(arr[i], arr[idx++]);
            }
        }

        for (int x : arr) cout << x << " ";
        cout << endl;
    }
    return 0;
}
