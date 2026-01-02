#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Left rotate an array by k positions.

Input:
- t test cases
- For each test case:
  - n, k
  - n integers

Output:
- Array after k left rotations

Approach:
- Use reversal technique:
  1. Reverse first k elements
  2. Reverse remaining elements
  3. Reverse whole array

Edge Cases:
- k >= n (use k % n)
- n = 1

Time Complexity:
- O(n)

Space Complexity:
- O(1)
*/

void reverseArr(vector<int>& arr, int l, int r) {
    while (l < r) {
        swap(arr[l++], arr[r--]);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        k %= n;
        reverseArr(arr, 0, k - 1);
        reverseArr(arr, k, n - 1);
        reverseArr(arr, 0, n - 1);

        for (int x : arr) cout << x << " ";
        cout << endl;
    }
    return 0;
}
