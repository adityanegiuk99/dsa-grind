#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Count how many times a given element appears in a sorted array.

Input:
- t test cases
- For each test case:
  - n, target
  - n sorted integers

Output:
- Number of occurrences of target

Approach:
- Find first and last occurrence using binary search
- Count = last - first + 1

Edge Cases:
- Target not present
- Single element array

Time Complexity:
- O(log n)

Space Complexity:
- O(1)
*/

int firstOcc(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            ans = mid;
            high = mid - 1;
        } else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return ans;
}

int lastOcc(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            ans = mid;
            low = mid + 1;
        } else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return ans;
}

int countOccurrences(vector<int>& arr, int target) {
    int first = firstOcc(arr, target);
    if (first == -1) return 0;
    int last = lastOcc(arr, target);
    return last - first + 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, target;
        cin >> n >> target;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        cout << countOccurrences(arr, target) << endl;
    }
    return 0;
}