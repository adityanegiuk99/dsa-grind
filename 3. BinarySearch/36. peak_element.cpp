#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Find any peak element in an array.
An element is a peak if it is greater than its neighbors.

Input:
- t test cases
- For each test case:
  - n
  - n integers

Output:
- Index of any peak element

Approach:
- Use binary search
- If mid < mid+1, peak lies on right side
- Else peak lies on left side or mid

Edge Cases:
- Single element array
- Peak at boundary

Time Complexity:
- O(log n)

Space Complexity:
- O(1)
*/

int findPeak(vector<int>& arr) {
    int low = 0, high = arr.size() - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] < arr[mid + 1])
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

        cout << findPeak(arr) << endl;
    }
    return 0;
}
