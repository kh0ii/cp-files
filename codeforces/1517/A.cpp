/**
 *	author: kh0i
 *	created: 28.03.2022 23:18:14
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
    ll x;
    cin >> x;
    ll res = x / 2050, ans = 0;
    if(res * 2050 != x){
        cout << -1 << '\n';
        return;
    }
    while(res > 0){
        ans += res % 10;
        res /= 10;
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

