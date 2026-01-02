#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Convert lowercase letters to uppercase and vice versa.

Input:
- t test cases
- For each test case: string s

Output:
- Case toggled string

Approach:
- Traverse string
- Use ASCII properties to toggle case

Edge Cases:
- Digits and symbols remain unchanged

Time Complexity:
- O(n)

Space Complexity:
- O(1)
*/

string toggleCase(string s) {
    for (char &c : s) {
        if (islower(c)) c = toupper(c);
        else if (isupper(c)) c = tolower(c);
    }
    return s;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << toggleCase(s) << endl;
    }
    return 0;
}
