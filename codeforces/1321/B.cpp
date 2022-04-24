/**
 *	author: kh0i
 *	created: 24.04.2022 12:30:52
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
    int n;
    cin >> n;
    vector<int> a(n + 1), b(n + 1);
    for(int i = 1; i <= n; ++i){
        cin >> b[i];
        a[i] = i - b[i];
    }
    debug(a);
    map<int, ll> mp;
    for(int i = 1; i <= n; ++i){
        mp[a[i]] += b[i];
    }
    ll ans = 0;
    for(auto k : mp){
        ans = max(ans, k.second);
    }
    cout << ans;
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    int test = 1;
//    cin >> test;
    for(int i = 1; i <= test; ++i){
        solve();
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}


