#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Check if any subarray has sum zero.

Approach:
- Use prefix sum + set
- If prefix sum repeats or becomes zero

Time Complexity:
- O(n)

Space Complexity:
- O(n)
*/

bool hasZeroSumSubarray(vector<int>& arr) {
    unordered_set<int> st;
    int sum = 0;

    for (int x : arr) {
        sum += x;
        if (sum == 0 || st.count(sum)) return true;
        st.insert(sum);
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << (hasZeroSumSubarray(arr) ? "YES" : "NO") << endl;
    }
    return 0;
}
