#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Given a rotated sorted array, find the number of rotations.
(Number of rotations = index of minimum element)

Input:
- t test cases
- For each test case:
  - n
  - n integers (rotated sorted array)

Output:
- Number of rotations

Approach:
- Find index of minimum element using binary search

Edge Cases:
- Array not rotated (answer = 0)
- Single element array

Time Complexity:
- O(log n)

Space Complexity:
- O(1)
*/

int countRotations(vector<int>& arr) {
    int low = 0, high = arr.size() - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] > arr[high])
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        cout << countRotations(arr) << endl;
    }
    return 0;
}
