#include <bits/stdc++.h>
using namespace std;
int a, b;
void solve(){
    cin>>a>>b;
    if(a%b==0) cout<<"0";
    else {
        int x =  a%b;
        cout<<b-x;
    }
    cout<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
