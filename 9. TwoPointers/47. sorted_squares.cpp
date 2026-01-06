#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Return sorted squares of a sorted array.

Approach:
- Two pointers from both ends
- Place larger square at back

Time Complexity:
- O(n)

Space Complexity:
- O(n)
*/

vector<int> sortedSquares(vector<int>& arr) {
    int n = arr.size();
    vector<int> res(n);
    int l = 0, r = n - 1, idx = n - 1;
    while (l <= r) {
        if (abs(arr[l]) > abs(arr[r]))
            res[idx--] = arr[l] * arr[l++];
        else
            res[idx--] = arr[r] * arr[r--];
    }
    return res;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        vector<int> res = sortedSquares(arr);
        for (int x : res) cout << x << " ";
        cout << endl;
    }
    return 0;
}
