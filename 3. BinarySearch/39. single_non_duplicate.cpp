#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
In a sorted array, every element appears exactly twice except
one element that appears only once. Find that element.

Input:
- t test cases
- For each test case:
  - n
  - n sorted integers

Output:
- The single non-duplicate element

Approach:
- Use binary search
- Pairs start at even index before the single element
- Adjust mid to even index and compare mid with mid+1

Edge Cases:
- Single element array
- Single element at start or end

Time Complexity:
- O(log n)

Space Complexity:
- O(1)
*/

int singleNonDuplicate(vector<int>& arr) {
    int low = 0, high = arr.size() - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        // Make mid even
        if (mid % 2 == 1) mid--;

        if (arr[mid] == arr[mid + 1])
            low = mid + 2;
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

        cout << singleNonDuplicate(arr) << endl;
    }
    return 0;
}
