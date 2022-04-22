/**
 *	author: kh0i
 *	created: 12.04.2022 22:40:24
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

void solve(){
    int n, x;
    ll ans = 0;
    cin >> n;
    vector<ll> cnt(2, 0ll);
    for(int i = 1; i <= n; ++i){
        cin >> x;
        cnt[x & 1]++;
    }
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> x;
        ans += cnt[x & 1];
    }
    cout << ans << '\n';
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    int test = 1;
    cin >> test;
    for(int i = 1; i <= test; ++i){
        solve();
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}


