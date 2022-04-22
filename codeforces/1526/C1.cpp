/**
 *	author: kh0i
 *	created: 10.04.2022 21:05:55
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
    int n, ans = 0;
    cin >> n;
    vector<ll> a(n + 1);
    vector<vector<ll>> f(n + 3, vector<ll> (n + 3, -1e14));
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i <= n; ++i){
        f[i][0] = 0;
    }
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= i; ++j){
            if(i - 1 >= j){
                f[i][j] = f[i - 1][j];
            }
            if(f[i - 1][j - 1] + a[i] >= 0){
                f[i][j] = max(f[i][j], f[i - 1][j - 1] + a[i]);
            }
        }
    }
    for(int i = 1; i <= n; ++i){
        if(f[n][i] >= 0){
            ans = max(ans, i);
        }
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

