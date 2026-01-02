#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Find the length of the longest subarray with sum equal to k.
(All elements are positive.)

Input:
- t test cases
- For each test case:
  - n, k
  - n positive integers

Output:
- Length of longest subarray

Approach:
- Use sliding window technique
- Expand window by moving right
- Shrink window when sum exceeds k

Edge Cases:
- No subarray with sum k
- Single element equals k

Time Complexity:
- O(n)

Space Complexity:
- O(1)
*/

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        int left = 0, sum = 0, maxLen = 0;
        for (int right = 0; right < n; right++) {
            sum += arr[right];

            while (sum > k) {
                sum -= arr[left++];
            }

            if (sum == k) {
                maxLen = max(maxLen, right - left + 1);
            }
        }

        cout << maxLen << endl;
    }
    return 0;
}
