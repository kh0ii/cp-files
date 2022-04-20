/**
 *	author: kh0i
 *	created: 19.04.2022 21:35:25
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
    ll n, m;
    cin >> n >> m;
    ll x = abs(n - m);
    if((x > 1 and min(n, m) == 1)){
        cout << -1 << '\n';
        return;
    }
    --n, --m;
    cout << min(n, m) * 2 + x * 2 - (x & 1) << '\n';
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


