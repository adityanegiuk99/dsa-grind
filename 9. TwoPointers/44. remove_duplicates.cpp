#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Remove duplicates from sorted array in-place.

Approach:
- Use two pointers
- Place unique elements at front

Time Complexity:
- O(n)

Space Complexity:
- O(1)
*/

int removeDuplicates(vector<int>& arr) {
    int idx = 0;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] != arr[idx]) {
            idx++;
            arr[idx] = arr[i];
        }
    }
    return idx + 1;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        int k = removeDuplicates(arr);
        cout << k << endl;
        for (int i = 0; i < k; i++) cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
