#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Given a sorted array and a value x, find the floor and ceil of x.
Floor: greatest element <= x
Ceil : smallest element >= x

Input:
- t test cases
- For each test case:
  - n, x
  - n sorted integers

Output:
- Floor and Ceil (print -1 if not exists)

Approach:
- Use binary search
- Track possible floor and ceil while narrowing search space

Edge Cases:
- x smaller than all elements
- x greater than all elements

Time Complexity:
- O(log n)

Space Complexity:
- O(1)
*/

pair<int,int> findFloorCeil(vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1;
    int floorVal = -1, ceilVal = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            floorVal = ceilVal = arr[mid];
            break;
        } else if (arr[mid] < x) {
            floorVal = arr[mid];
            low = mid + 1;
        } else {
            ceilVal = arr[mid];
            high = mid - 1;
        }
    }
    return {floorVal, ceilVal};
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        auto res = findFloorCeil(arr, x);
        cout << res.first << " " << res.second << endl;
    }
    return 0;
}
