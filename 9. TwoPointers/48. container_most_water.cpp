#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Find maximum water container area.

Approach:
- Two pointers
- Move pointer with smaller height

Time Complexity:
- O(n)

Space Complexity:
- O(1)
*/

int maxArea(vector<int>& height) {
    int l = 0, r = height.size() - 1, ans = 0;
    while (l < r) {
        ans = max(ans, min(height[l], height[r]) * (r - l));
        if (height[l] < height[r]) l++;
        else r--;
    }
    return ans;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> h(n);
        for (int i = 0; i < n; i++) cin >> h[i];
        cout << maxArea(h) << endl;
    }
    return 0;
}
