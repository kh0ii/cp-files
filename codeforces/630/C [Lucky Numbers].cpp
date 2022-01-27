#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;

void solve(){
    ll n, ans = 0;
    cin >> n; 
    for(int i=1; i<=n; ++i)
        ans += (1ll << i);
    cout << ans;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    //cin >> t;
    while(t--)
    	solve();
    return 0;
}



