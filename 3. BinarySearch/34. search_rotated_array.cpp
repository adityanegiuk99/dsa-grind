#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Given a rotated sorted array and a target value,
find the index of the target or return -1.

Input:
- t test cases
- For each test case:
  - n, target
  - n integers (rotated sorted array)

Output:
- Index of target or -1

Approach:
- Modified binary search
- One half is always sorted
- Decide which half to search

Edge Cases:
- Array not rotated
- Target not present

Time Complexity:
- O(log n)

Space Complexity:
- O(1)
*/

int searchRotated(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) return mid;

        // Left half sorted
        if (arr[low] <= arr[mid]) {
            if (arr[low] <= target && target < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        // Right half sorted
        else {
            if (arr[mid] < target && target <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
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

        cout << searchRotated(arr, target) << endl;
    }
    return 0;
}
