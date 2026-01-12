#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int count = 1;
    int maxL = 1;
    for (int i = 1; i < n; i++) {
        if (v[i] >= v[i - 1]) {
            count++;
        } else {
            count = 1;
        }
        maxL = max(maxL, count);
    }
    cout << maxL << endl;
    return 0;
}
