#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Find the maximum number of consecutive 1s in a binary array.

Input:
- t test cases
- For each test case:
  - n
  - n integers (0 or 1)

Output:
- Maximum count of consecutive 1s

Approach:
- Count current streak of 1s
- Reset count when 0 appears

Edge Cases:
- No 1s
- All 1s

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

        int cnt = 0, mx = 0;
        for (int x : arr) {
            if (x == 1) {
                cnt++;
                mx = max(mx, cnt);
            } else {
                cnt = 0;
            }
        }

        cout << mx << endl;
    }
    return 0;
}
