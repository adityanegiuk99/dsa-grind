#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Find maximum of each sliding window of size k.

Approach:
- Use deque to store useful indices
- Front always holds max of window

Time Complexity:
- O(n)

Space Complexity:
- O(k)
*/

vector<int> slidingWindowMax(vector<int>& arr, int k) {
    deque<int> dq;
    vector<int> res;

    for (int i = 0; i < arr.size(); i++) {
        while (!dq.empty() && arr[dq.back()] <= arr[i])
            dq.pop_back();

        dq.push_back(i);

        if (dq.front() == i - k)
            dq.pop_front();

        if (i >= k - 1)
            res.push_back(arr[dq.front()]);
    }
    return res;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        auto res = slidingWindowMax(arr, k);
        for (int x : res) cout << x << " ";
        cout << endl;
    }
    return 0;
}
