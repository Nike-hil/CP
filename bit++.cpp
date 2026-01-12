#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int X = 0;
    while (n--) {
        string s;
        cin >> s;
        X += (s[1] == '+') ? 1 : -1;
    }

    cout << X << '\n';
    return 0;
}
