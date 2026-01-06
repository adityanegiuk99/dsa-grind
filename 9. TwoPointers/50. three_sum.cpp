#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Find all unique triplets with sum = 0.

Approach:
- Sort array
- Fix one element, apply two pointers for remaining two

Time Complexity:
- O(n^2)

Space Complexity:
- O(1)
*/

vector<vector<int>> threeSum(vector<int>& arr) {
    vector<vector<int>> res;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++) {
        if (i > 0 && arr[i] == arr[i - 1]) continue;
        int l = i + 1, r = arr.size() - 1;
        while (l < r) {
            int sum = arr[i] + arr[l] + arr[r];
            if (sum == 0) {
                res.push_back({arr[i], arr[l], arr[r]});
                l++; r--;
                while (l < r && arr[l] == arr[l - 1]) l++;
                while (l < r && arr[r] == arr[r + 1]) r--;
            } else if (sum < 0) l++;
            else r--;
        }
    }
    return res;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        auto res = threeSum(arr);
        for (auto &v : res) {
            for (int x : v) cout << x << " ";
            cout << endl;
        }
        if (res.empty()) cout << "-1\n";
    }
    return 0;
}
