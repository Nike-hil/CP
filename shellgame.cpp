#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    int k;
    in >> k;

    for (int i = 0; i < 3; i++) {
        int a, b;
        in >> a >> b; 
        if (a == k) k = b;   
        else if (b == k) k = a; 
    }

    out << k << "\n"; // final position
    return 0;
}
