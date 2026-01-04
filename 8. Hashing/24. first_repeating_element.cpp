#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Find the first element that repeats.

Approach:
- Use unordered_set
- If element already exists, it is repeating

Time Complexity:
- O(n)

Space Complexity:
- O(n)
*/

int firstRepeating(vector<int>& arr) {
    unordered_set<int> st;
    for (int x : arr) {
        if (st.count(x)) return x;
        st.insert(x);
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
        cout << firstRepeating(arr) << endl;
    }
    return 0;
}
