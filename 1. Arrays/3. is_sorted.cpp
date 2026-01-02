#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Check whether an array is sorted in non-decreasing order.

Input:
- t test cases
- For each test case:
  - n
  - n integers

Output:
- Print YES if sorted, otherwise NO

Approach:
- Compare every element with its previous one
- If any element is smaller than previous, array is not sorted

Edge Cases:
- Single element array
- Already sorted array

Time Complexity:
- O(n)

Space Complexity:
- O(1)
*/

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        bool sorted = true;
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[i - 1]) {
                sorted = false;
                break;
            }
        }

        cout << (sorted ? "YES" : "NO") << endl;
    }
    return 0;
}
