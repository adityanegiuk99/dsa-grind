#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Count how many times a given element appears in an array.

Input:
- t test cases
- For each test case:
  - n
  - n integers
  - integer x to count

Output:
- Number of occurrences of x

Approach:
- Traverse the array
- Increment counter whenever element equals x

Edge Cases:
- Element not present
- All elements same

Time Complexity:
- O(n)

Space Complexity:
- O(1)
*/

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        cin >> x;

        int cnt = 0;
        for (int v : arr) {
            if (v == x) cnt++;
        }

        cout << cnt << endl;
    }
    return 0;
}