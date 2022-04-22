/**
 *	author: kh0i
 *	created: 19.04.2022 21:57:20
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

ll n, a[5005], l[5005], r[5005];

void solve(){
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    for(int i = 1; i <= n; ++i){
        // left
        ll cur = 1, x;
        for(int j = i - 1; j >= 1; --j){
            x = (cur + a[j] - 1) / a[j];
            l[i] += x;
            cur = x * a[j] + 1;           
        }
        // right
        cur = 1;
        for(int j = i + 1; j <= n; ++j){
            x = (cur + a[j] - 1) / a[j];
            r[i] += x;
            cur = x * a[j] + 1;
        }
    }
    ll ans = LLONG_MAX;
    for(int i = 1; i <= n; ++i){
        ans = min(ans, l[i] + r[i]);
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


