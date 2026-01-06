#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s.size() > 10) {
            char first = s[0];
            char last = s[s.size() - 1];
            int middle = s.size() - 2;
            cout << first << middle << last << endl;
        } else {
            cout << s << endl;
        }
    }
}
