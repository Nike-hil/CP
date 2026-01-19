#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        bool unsorted = false;
        for (int i = 1; i < n; i++) {
            if (v[i] < v[i - 1]) {
                unsorted = true;
                break;
            }
        }

        if (unsorted) {
            cout << 0 << endl;
            continue;
        }

        int minDiff = INT_MAX;
        for (int i = 1; i < n; i++) {
            minDiff = min(minDiff, v[i] - v[i - 1]);
        }

        cout << (minDiff / 2) + 1 << endl;
    }
    return 0;
}
