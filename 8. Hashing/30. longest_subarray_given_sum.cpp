#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Find longest subarray with sum = k (negative allowed).

Approach:
- Prefix sum + hashmap
- Store first occurrence of prefix sum

Time Complexity:
- O(n)

Space Complexity:
- O(n)
*/

int longestSubarraySum(vector<int>& arr, int k) {
    unordered_map<int, int> mp;
    int sum = 0, maxLen = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];

        if (sum == k) maxLen = i + 1;
        if (mp.count(sum - k))
            maxLen = max(maxLen, i - mp[sum - k]);

        if (!mp.count(sum)) mp[sum] = i;
    }
    return maxLen;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << longestSubarraySum(arr, k) << endl;
    }
    return 0;
}
