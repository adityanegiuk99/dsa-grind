#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Print frequency of each element in the array.

Input:
- t test cases
- For each test case:
  - n
  - n integers

Output:
- Each element and its frequency

Approach:
- Use unordered_map to count frequency
- Traverse array and increment count

Edge Cases:
- All elements same
- Single element

Time Complexity:
- O(n)

Space Complexity:
- O(n)
*/

void frequencyCount(vector<int>& arr) {
    unordered_map<int, int> freq;
    for (int x : arr) freq[x]++;

    for (auto it : freq) {
        cout << it.first << " " << it.second << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        frequencyCount(arr);
    }
    return 0;
}
