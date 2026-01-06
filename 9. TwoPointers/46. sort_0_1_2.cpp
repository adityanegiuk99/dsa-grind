#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Sort array containing only 0s, 1s and 2s.

Approach:
- Dutch National Flag algorithm
- Maintain low, mid, high pointers

Time Complexity:
- O(n)

Space Complexity:
- O(1)
*/

void sort012(vector<int>& arr) {
    int low = 0, mid = 0, high = arr.size() - 1;
    while (mid <= high) {
        if (arr[mid] == 0) swap(arr[low++], arr[mid++]);
        else if (arr[mid] == 1) mid++;
        else swap(arr[mid], arr[high--]);
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        sort012(arr);
        for (int x : arr) cout << x << " ";
        cout << endl;
    }
    return 0;
}
