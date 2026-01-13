#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    unordered_map<char, int> mp;
    for (char c : s1) {
        mp[c]++;
    }
    for (char c : s2) {
        if (c == ' ') continue;
        if (mp[c] == 0) {
            cout << "NO";
            return 0;
        }
        mp[c]--;
    }
    cout << "YES";
    return 0;
}
