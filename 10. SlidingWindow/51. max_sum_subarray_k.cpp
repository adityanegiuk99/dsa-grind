#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Find the maximum sum of any subarray of size k.

Approach:
- Use fixed-size sliding window
- Keep current window sum and update max

Time Complexity:
- O(n)

Space Complexity:
- O(1)
*/

int maxSumSubarray(vector<int>& arr, int k) {
    int sum = 0, maxSum = INT_MIN;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (i >= k - 1) {
            maxSum = max(maxSum, sum);
            sum -= arr[i - k + 1];
        }
    }
    return maxSum;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << maxSumSubarray(arr, k) << endl;
    }
    return 0;
}
