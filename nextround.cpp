#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int score = v[k - 1];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] >= score && v[i] > 0)
            count++;
    }
    cout << count << '\n';
    return 0;
}
