/**
 *	author: kh0i
 *	created: 24.04.2022 15:31:31
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
    int n, x, cur = 0, ans = 0;
    cin >> n;
    vector<int> f(n + 1, 0);
    for(int i = 1; i <= n * 2; ++i){
        cin >> x;
        cur += (f[x] ? -1 : 1);
        f[x] ^= 1;
        ans = max(ans, cur);
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


