#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,minele=INT_MAX;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        minele=min(minele,abs(v[i]));
    }
    cout<<minele<<endl;
    return 0;
}