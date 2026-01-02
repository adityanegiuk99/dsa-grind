#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Remove duplicates from a sorted array and print the unique elements.

Input:
- t test cases
- For each test case:
  - n
  - sorted array of n integers

Output:
- Print count of unique elements
- Print the unique elements

Approach:
- Use two pointers
- One pointer tracks position of unique elements
- Overwrite duplicates

Edge Cases:
- All elements same
- n = 1

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

        int idx = 0;
        for (int j = 1; j < n; j++) {
            if (arr[j] != arr[idx]) {
                idx++;
                arr[idx] = arr[j];
            }
        }

        cout << idx + 1 << endl;
        for (int i = 0; i <= idx; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
