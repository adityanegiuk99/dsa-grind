#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Find longest common prefix among strings.

Approach:
- Compare characters column-wise

Time Complexity:
- O(n * m)

Space Complexity:
- O(1)
*/

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";
    for (int i = 0; i < strs[0].size(); i++) {
        char c = strs[0][i];
        for (int j = 1; j < strs.size(); j++) {
            if (i >= strs[j].size() || strs[j][i] != c)
                return strs[0].substr(0, i);
        }
    }
    return strs[0];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> strs(n);
        for (int i = 0; i < n; i++) cin >> strs[i];
        cout << longestCommonPrefix(strs) << endl;
    }
    return 0;
}
