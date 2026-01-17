#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        unordered_map<int,int> um;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            um[arr[i]]++;
        } 
        if(um[k]>0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}