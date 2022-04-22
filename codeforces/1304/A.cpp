#include <bits/stdc++.h>
using namespace std;
int x, y, a, b;
void solve(){
    cin>>x>>y>>a>>b;
    if(abs(x-y)%(a+b)==0) cout<<abs(x-y)/(a+b);
    else cout<<-1;
    cout<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

