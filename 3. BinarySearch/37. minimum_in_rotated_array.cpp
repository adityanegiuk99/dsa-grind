#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Given a rotated sorted array, find the minimum element.

Input:
- t test cases
- For each test case:
  - n
  - n integers (rotated sorted array)

Output:
- Minimum element

Approach:
- Use binary search
- Compare mid with high to decide search space

Edge Cases:
- Array not rotated
- Single element array

Time Complexity:
- O(log n)

Space Complexity:
- O(1)
*/

int findMin(vector<int>& arr) {
    int low = 0, high = arr.size() - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] > arr[high])
            low = mid + 1;
        else
            high = mid;
    }
    return arr[low];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        cout << findMin(arr) << endl;
    }
    return 0;
}
