#include <bits/stdc++.h>
using namespace std;
int x, m, n;
void solve(){
    cin>>x>>m>>n;
    while(m--){
        if(x>20)
            x = x/2 + 10;
        else break;
    }
    x-=n*10;
    if(x<=0) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}

