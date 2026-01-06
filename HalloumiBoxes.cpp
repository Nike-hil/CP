#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long n, k;
        cin>>n>>k;
        vector<long long> boxes(n);
        for(long long j=0; j<n; j++)    cin>>boxes[j];
        vector<long long> copybox = boxes;
        sort(copybox.begin(), copybox.end());
        if(boxes == copybox|| k>1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}