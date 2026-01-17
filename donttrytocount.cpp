#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        if (x.find(s) != string::npos) {
            cout << 0 << "\n";
            continue;
        }
        int ops = 0;
        bool found = false;
        for (int i = 1; i <= 10; i++) {
            x += x;
            ops++;
            if (x.find(s) != string::npos) {
                cout << ops << "\n";
                found = true;
                break;
            }
        }
        if (!found) cout << -1 << "\n";
    }
    return 0;
}
