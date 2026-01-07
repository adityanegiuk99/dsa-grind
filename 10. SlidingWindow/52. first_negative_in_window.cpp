#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
For each window of size k, print the first negative number.

Approach:
- Use deque to store indices of negative numbers
- Remove out-of-window indices

Time Complexity:
- O(n)

Space Complexity:
- O(k)
*/

vector<int> firstNegative(vector<int>& arr, int k) {
    deque<int> dq;
    vector<int> res;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < 0) dq.push_back(i);

        if (i >= k - 1) {
            if (!dq.empty() && dq.front() < i - k + 1)
                dq.pop_front();

            if (dq.empty()) res.push_back(0);
            else res.push_back(arr[dq.front()]);
        }
    }
    return res;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        auto res = firstNegative(arr, k);
        for (int x : res) cout << x << " ";
        cout << endl;
    }
    return 0;
}
