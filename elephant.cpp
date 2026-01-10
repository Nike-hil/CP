#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long count = 0;
    while (n > 0) {
        n -= 5;
        count++;
    }
    cout << count << endl;
    return 0;
}
