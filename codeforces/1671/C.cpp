/**
 *	author: kh0i
 *	created: 22.04.2022 22:04:54
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
    ll n, x, sum = 0;
    cin >> n >> x;
    vector<ll> a(n + 1, 0), pp(n + 1, 0);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        sum += a[i];
    }

    sort(a.begin() + 1, a.end());
    for(ll i = n; i >= 1; --i){
        ll l = 1, r = 1e10, mx = 0;
        while(l <= r){
            ll mid = l + (r - l) / 2;
            ll total = (mid - 1ll) * i + sum;
            if(total <= x){
                l = mid + 1;
                mx = mid;
            }
            else r = mid - 1;
        }
        pp[i] = mx;
        sum -= a[i];
    }
    ll ans = 0; sum = 0;

    for(ll i = n; i >= 1; --i){
        ans += pp[i] * i;
        sum += pp[i];
        pp[i - 1] -= sum;
    }
    cout << ans << "\n";
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


