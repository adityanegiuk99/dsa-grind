#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Find missing number from range 1 to n using hashing.

Approach:
- Mark presence using boolean array
- Find missing index

Time Complexity:
- O(n)

Space Complexity:
- O(n)
*/

int missingNumber(vector<int>& arr, int n) {
    vector<bool> present(n + 1, false);
    for (int x : arr) present[x] = true;

    for (int i = 1; i <= n; i++) {
        if (!present[i]) return i;
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n - 1);
        for (int i = 0; i < n - 1; i++) cin >> arr[i];
        cout << missingNumber(arr, n) << endl;
    }
    return 0;
}
