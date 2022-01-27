#include <bits/stdc++.h>
using namespace std;
int n;
void solve(){
    cin>>n;
    int j, x=0, y=0;
    n*=2;
    while(n--){
        cin>>j;
        (j%2==0 ? x++ : y++);
    }
    if(x!=y) cout<<"NO\n";
    else cout<<"YES\n";
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}

