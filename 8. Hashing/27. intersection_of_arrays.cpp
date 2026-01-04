#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Find intersection of two arrays.

Approach:
- Store elements of first array in set
- Check presence while traversing second array

Time Complexity:
- O(n + m)

Space Complexity:
- O(n)
*/

int intersectionCount(vector<int>& a, vector<int>& b) {
    unordered_set<int> st(a.begin(), a.end());
    unordered_set<int> inter;

    for (int x : b) {
        if (st.count(x)) inter.insert(x);
    }
    return inter.size();
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
        cout << intersectionCount(a, b) << endl;
    }
    return 0;
}
