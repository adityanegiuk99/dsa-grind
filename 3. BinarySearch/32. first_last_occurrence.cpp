#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Given a sorted array with duplicates, find the first and last
occurrence of a given element.

Input:
- t test cases
- For each test case:
  - n, target
  - n sorted integers

Output:
- First index and last index (space-separated)
- If not found, print -1 -1

Approach:
- Use modified binary search twice
- First search moves left on match
- Second search moves right on match

Edge Cases:
- Target not present
- All elements same

Time Complexity:
- O(log n)

Space Complexity:
- O(1)
*/

int firstOccurrence(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            ans = mid;
            high = mid - 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int lastOccurrence(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            ans = mid;
            low = mid + 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, target;
        cin >> n >> target;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        int first = firstOccurrence(arr, target);
        int last = lastOccurrence(arr, target);

        cout << first << " " << last << endl;
    }
    return 0;
}
