#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            int k = i ^ j;

            if (k < j || k > n) continue;
            if (i + j > k) count++;
        }
    }
    cout << count << endl;
    return 0;
}
