#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Find union of two arrays.

Approach:
- Insert elements of both arrays into set

Time Complexity:
- O(n + m)

Space Complexity:
- O(n + m)
*/

int unionCount(vector<int>& a, vector<int>& b) {
    unordered_set<int> st;
    for (int x : a) st.insert(x);
    for (int x : b) st.insert(x);
    return st.size();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        cout << unionCount(a, b) << endl;
    }
    return 0;
}
