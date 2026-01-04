#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Find longest subarray with equal number of 0s and 1s.

Approach:
- Replace 0 with -1
- Reduce problem to longest subarray with sum = 0

Time Complexity:
- O(n)

Space Complexity:
- O(n)
*/

int longestEqual01(vector<int>& arr) {
    unordered_map<int, int> mp;
    int sum = 0, maxLen = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum += (arr[i] == 0 ? -1 : 1);

        if (sum == 0) maxLen = i + 1;
        if (mp.count(sum)) maxLen = max(maxLen, i - mp[sum]);
        else mp[sum] = i;
    }
    return maxLen;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << longestEqual01(arr) << endl;
    }
    return 0;
}
