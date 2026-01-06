#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, x;
        cin >> n >> x;
        vector<long long> gasstn(n);
        for(int i = 0; i < n; i++){
            cin >> gasstn[i];
        }
        long long total_distance = gasstn[0];
        for(int i = 0; i < n - 1; i++){
            total_distance = max(total_distance, gasstn[i+1] - gasstn[i]);
        }
        total_distance = max(total_distance, 2 * (x - gasstn[n-1]));
        cout << total_distance << endl;
    }
    return 0;
}
