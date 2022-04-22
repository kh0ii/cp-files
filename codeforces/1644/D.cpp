#include "bits/stdc++.h"
using namespace std;

#define int long long

const int mod = 998244353;

int n, m, k, q, x[200005], y[200005];

void solve(){
    cin >> n >> m >> k >> q;
    for(int i = 1; i <= q; ++i)
        cin >> x[i] >> y[i];
    int ans = 1;
    set<int> r, c;
    for(int i = q; i >= 1; --i){
        if(r.count(x[i]) and c.count(y[i]))
            continue;
        else if(r.size() == n or c.size() == m)
            break;
        r.insert(x[i]);
        c.insert(y[i]);
        ans = ans * k % mod;
    }
    cout << ans << '\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int test = 1;
    cin >> test;
    for(int i=1; i<=test; ++i){
        solve();
    }
    return 0;
}
// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

