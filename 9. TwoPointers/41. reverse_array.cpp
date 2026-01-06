#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Reverse the given array in-place.

Approach:
- Use two pointers from start and end
- Swap elements and move pointers inward

Time Complexity:
- O(n)

Space Complexity:
- O(1)
*/

void reverseArray(vector<int>& arr) {
    int l = 0, r = arr.size() - 1;
    while (l < r) {
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        reverseArray(arr);
        for (int x : arr) cout << x << " ";
        cout << endl;
    }
    return 0;
}
