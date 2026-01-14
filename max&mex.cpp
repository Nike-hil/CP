#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        set<long long> s;
        long long max_val = 0;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            s.insert(x);
            max_val = max(max_val, x);
        }
        long long mex = 0;
        while (s.count(mex)) mex++;

        if (k == 0) {
            cout << s.size() << "\n";
            continue;
        }

        if (mex > max_val) {
            cout << s.size() + k << "\n";
        } else {
            long long new_elem = (mex + max_val + 1) / 2;
            if (s.count(new_elem)) {
                cout << s.size() << "\n";
            } else {
                cout << s.size() + 1 << "\n";
            }
        }
    }

    return 0;
}
