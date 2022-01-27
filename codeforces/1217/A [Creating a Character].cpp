#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
int s, i, e;

void solve(){
    cin>>s>>i>>e;
    int k = max(0, (e + i - s + 2)/2);
    cout<<max(e - k + 1, 0)<<'\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}



