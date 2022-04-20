/**
 *	author: kh0i
 *	created: 14.04.2022 18:31:33
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
    int n, w, x;
    cin >> n >> w;
    int mx = 0, mn = 0, cur = 0;
    for(int i = 1; i <= n; ++i){
        cin >> x;
        cur += x;
        mx = max(mx, cur);
        mn = min(mn, cur);
    }
    debug(mx, mn);
    cout << max(0, w - mx + 1 + mn);
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


