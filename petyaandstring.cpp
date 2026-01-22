#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    for(int i=0;i<s.size();i++){
        char c1=std::tolower(s[i]);
        char c2=std::tolower(t[i]);
        if(c1!=c2){
            if( c1> c2 ) cout<<"1"<<endl;
            else cout<<"-1"<<endl;
            return 0;
        }
    }
    cout<<"0"<<endl;
    return 0;
}