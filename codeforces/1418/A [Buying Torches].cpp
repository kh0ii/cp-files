/**
 *	author: kh0i
 *	created: 28.03.2022 23:22:31
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
    ll x, y, k;
    cin >> x >> y >> k;
    ll need = (y + 1) * k - 1, res = 0;
    res = (need + (x - 2)) / (x - 1) + k;
    cout << res << '\n';
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

