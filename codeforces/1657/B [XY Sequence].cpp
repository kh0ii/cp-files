/**
 *	author: kh0i
 *	created: 22.03.2022 21:47:57
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

ll n, b, x, y, pre;

void solve(){
    ll ans = 0;
    cin >> n >> b >> x >> y;
    pre = 0;
    for(int i = 0; i <= n; ++i){
        ans += pre;
        if(pre + x > b){
            pre = pre - y;
        }
        else pre = pre + x;
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

// Write stuff down

