#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Search for an element in a nearly sorted array.
An element may be at index i, i-1, or i+1.

Input:
- t test cases
- For each test case:
  - n, target
  - n integers (nearly sorted)

Output:
- Index of target or -1

Approach:
- Modified binary search
- Check mid, mid-1, mid+1
- Reduce search space accordingly

Edge Cases:
- Target at boundaries
- Array of size 1 or 2

Time Complexity:
- O(log n)

Space Complexity:
- O(1)
*/

int searchNearlySorted(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) return mid;
        if (mid - 1 >= low && arr[mid - 1] == target) return mid - 1;
        if (mid + 1 <= high && arr[mid + 1] == target) return mid + 1;

        if (arr[mid] > target)
            high = mid - 2;
        else
            low = mid + 2;
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, target;
        cin >> n >> target;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        cout << searchNearlySorted(arr, target) << endl;
    }
    return 0;
}
