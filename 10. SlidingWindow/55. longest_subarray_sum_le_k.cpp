#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Find length of longest subarray with sum <= k.

Approach:
- Variable sliding window
- Shrink window when sum exceeds k

Time Complexity:
- O(n)

Space Complexity:
- O(1)
*/

int longestSubarrayLeK(vector<int>& arr, int k) {
    int l = 0, sum = 0, maxLen = 0;
    for (int r = 0; r < arr.size(); r++) {
        sum += arr[r];
        while (sum > k) {
            sum -= arr[l++];
        }
        maxLen = max(maxLen, r - l + 1);
    }
    return maxLen;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << longestSubarrayLeK(arr, k) << endl;
    }
    return 0;
}
