#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Find element appearing more than n/2 times.
Print -1 if none exists.

Approach:
- Use hashmap to count frequency
- Check if any frequency > n/2

Time Complexity:
- O(n)

Space Complexity:
- O(n)
*/

int majorityElement(vector<int>& arr) {
    unordered_map<int, int> freq;
    int n = arr.size();

    for (int x : arr) {
        freq[x]++;
        if (freq[x] > n / 2) return x;
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << majorityElement(arr) << endl;
    }
    return 0;
}
