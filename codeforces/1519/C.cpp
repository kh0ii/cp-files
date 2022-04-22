/**
 *	author: kh0i
 *	created: 22.04.2022 21:07:44
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
    int n, x;
    cin >> n;
    vector<ll> a(n + 1), ans(n + 1, 0);
    vector<vector<ll>> b(n + 1);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    for(int j = 1; j <= n; ++j){
        cin >> x;
        b[a[j]].push_back(x);
    }
    for(int i = 1; i <= n; ++i){
        sort(b[i].begin(), b[i].end());
        int s = b[i].size();
        vector<ll> p(s + 1, 0);
        partial_sum(b[i].begin(), b[i].end(), p.begin() + 1);
        for(int j = 1; j <= s; ++j){
            ll mink = (s / j) * j;
            ans[j] += p[s] - p[s - mink];
        }
    }
    for(int i = 1; i <= n; ++i){
        cout << ans[i] << ' ';
    }
    cout << '\n';
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


