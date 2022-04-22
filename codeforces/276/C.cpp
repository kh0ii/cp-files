#include "bits/stdc++.h"
using namespace std;
#define int long long
const int inf = 1e9+9, mod = 1e9+7;
int n, q, a[200005], d[200005], l, r, ans = 0;

void solve(){
    cin >> n >> q;
    for(int i=1; i<=n; ++i)
        cin >> a[i];
    for(int i=0; i<q; ++i){
        cin >> l >> r;
        d[l]++;
        d[r+1]--;
    }
    for(int i=1; i<=n; ++i)
        d[i] += d[i-1];
    sort(a+1, a+n+1, greater<int>());
    sort(d+1, d+n+1, greater<int>());
    for(int i=1; i<=n; ++i){
        // cout << a[i] << ' ' << d[i] << '\n';
        ans += a[i] * d[i];
    }
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



