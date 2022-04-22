/**
 *	author: kh0i
 *	created: 21.04.2022 21:59:12
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
    vector<ll> a(n + 3, 0), p(n + 3, 0);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    map<ll, int> mp;
    int ans = 0;
    for(int i = n; i >= 1; --i){
        p[i] = p[i + 1] + a[i];
        mp[p[i]] = i;
    }
    ll sum = 0;
    for(int i = 1; i <= n; ++i){
        mp.erase(p[i]);
        sum += a[i];
        if(mp.count(sum)){
            debug(i, mp[sum], sum);
            ans = max(ans, i + n - mp[sum] + 1);
        }
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


