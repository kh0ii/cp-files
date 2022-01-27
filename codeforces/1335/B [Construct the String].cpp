#include <bits/stdc++.h>
using namespace std;
int n, a, b;
void solve(){
    cin>>n>>a>>b;
    string s;
    int i=0;
    while(s.size()<n){
        s+=char(i+'a');
        if(i==b-1) i=0;
        else i++;
    }
    cout<<s<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}

