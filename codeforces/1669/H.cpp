/**
 *	author: kh0i
 *	created: 21.04.2022 22:32:55
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1), p(32, 0);

    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        for(int j = 0; j <= 30; ++j){
            p[j] = p[j] + !!((1 << j) & a[i]);
        }
    }

    int ans = 0;

    for(int j = 30; j >= 0; --j){
        if(n - p[j] <= k){
            k -= (n - p[j]);
            ans += (1 << j);
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


