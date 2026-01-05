#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Given a sorted array and a target value, find the index of the target.
If the target is not present, print -1.

Input:
- t test cases
- For each test case:
  - n (size of array), target
  - n sorted integers

Output:
- Index of target element or -1

Approach:
- Use iterative binary search
- Compare middle element with target
- Reduce search space accordingly

Edge Cases:
- Target not present
- Single element array

Time Complexity:
- O(log n)

Space Complexity:
- O(1)
*/

int binarySearch(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
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

        cout << binarySearch(arr, target) << endl;
    }
    return 0;
}
