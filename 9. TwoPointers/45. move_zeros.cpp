#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Move all zeros to end while maintaining order.

Approach:
- Use pointer to track position of non-zero elements

Time Complexity:
- O(n)

Space Complexity:
- O(1)
*/

void moveZeros(vector<int>& arr) {
    int idx = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) swap(arr[i], arr[idx++]);
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        moveZeros(arr);
        for (int x : arr) cout << x << " ";
        cout << endl;
    }
    return 0;
}
