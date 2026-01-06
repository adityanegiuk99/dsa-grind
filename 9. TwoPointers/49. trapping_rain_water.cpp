#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Calculate total trapped rain water.

Approach:
- Two pointers
- Track leftMax and rightMax

Time Complexity:
- O(n)

Space Complexity:
- O(1)
*/

int trap(vector<int>& height) {
    int l = 0, r = height.size() - 1;
    int leftMax = 0, rightMax = 0, water = 0;

    while (l < r) {
        if (height[l] < height[r]) {
            leftMax = max(leftMax, height[l]);
            water += leftMax - height[l];
            l++;
        } else {
            rightMax = max(rightMax, height[r]);
            water += rightMax - height[r];
            r--;
        }
    }
    return water;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> h(n);
        for (int i = 0; i < n; i++) cin >> h[i];
        cout << trap(h) << endl;
    }
    return 0;
}
