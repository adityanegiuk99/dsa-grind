#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Find the second largest element in an array.
If it does not exist, print -1.

Input:
- t test cases
- For each test case:
  - n (size of array)
  - n integers

Output:
- Second largest element or -1

Approach:
- Keep track of largest and second largest elements
- Ignore duplicates of the largest element

Edge Cases:
- All elements are equal
- Array size less than 2

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

        int largest = INT_MIN, second = INT_MIN;

        for (int x : arr) {
            if (x > largest) {
                second = largest;
                largest = x;
            } else if (x < largest && x > second) {
                second = x;
            }
        }

        cout << (second == INT_MIN ? -1 : second) << endl;
    }
    return 0;
}
