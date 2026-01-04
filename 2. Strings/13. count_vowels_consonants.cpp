#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:
Count vowels and consonants in a string.

Input:
- t test cases
- For each test case: string s

Output:
- Number of vowels and consonants

Approach:
- Traverse string
- Check if character is alphabet
- Classify as vowel or consonant

Edge Cases:
- String with no alphabets

Time Complexity:
- O(n)

Space Complexity:
- O(1)
*/

pair<int,int> countVC(string s) {
    int vowels = 0, consonants = 0;
    for (char c : s) {
        if (isalpha(c)) {
            c = tolower(c);
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
                vowels++;
            else
                consonants++;
        }
    }
    return {vowels, consonants};
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        auto res = countVC(s);
        cout << res.first << " " << res.second << endl;
    }
    return 0;
}
