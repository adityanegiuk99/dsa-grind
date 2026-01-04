#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Count number of distinct elements in an array.

Approach:
- Insert all elements into unordered_set
- Size of set = distinct count

Time Complexity:
- O(n)

Space Complexity:
- O(n)
*/

int countDistinct(vector<int>& arr) {
    unordered_set<int> st(arr.begin(), arr.end());
    return st.size();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << countDistinct(arr) << endl;
    }
    return 0;
}
