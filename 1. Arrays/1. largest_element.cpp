#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Given an array of integers, find the largest element in the array.

Input:
- t test cases
- For each test case:
  - An integer n (size of array)
  - n space-separated integers

Output:
- Print the largest element for each test case

Approach:
- Assume the first element is the largest
- Traverse the array and update the maximum whenever a larger value is found

Edge Cases:
- Array of size 1
- All elements are equal

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

        int mx = arr[0];
        for (int i = 1; i < n; i++) {
            mx = max(mx, arr[i]);
        }

        cout << mx << endl;
    }
    return 0;
}
