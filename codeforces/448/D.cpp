/**
 *	author: kh0i
 *	created: 19.03.2022 09:30:55
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

ll n, m, k;

void solve(){
    cin >> n >> m >> k;
    ll l = 1, r = n * m, ans;
    while(l <= r){
        ll mid = l + (r - l) / 2;
        ll cnt = 0;
        for(ll i = 1; i <= m; ++i){
            cnt += min(n, (mid - 1) / i);
        }
        if(cnt < k){
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
//        debug(l, r, mid, cnt);
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

// Write stuff down

