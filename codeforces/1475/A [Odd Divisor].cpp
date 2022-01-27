#include <bits/stdc++.h>
using namespace std;
long long n;
void solve(){
    cin>>n;
    if(n&(n-1)) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}

