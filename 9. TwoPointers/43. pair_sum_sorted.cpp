#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Check if there exists a pair with given sum in sorted array.

Approach:
- Use two pointers (low, high)
- Move pointers based on sum comparison

Time Complexity:
- O(n)

Space Complexity:
- O(1)
*/

bool hasPairSum(vector<int>& arr, int x) {
    int l = 0, r = arr.size() - 1;
    while (l < r) {
        int sum = arr[l] + arr[r];
        if (sum == x) return true;
        else if (sum < x) l++;
        else r--;
    }
    return false;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n, x; cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << (hasPairSum(arr, x) ? "YES" : "NO") << endl;
    }
    return 0;
}
