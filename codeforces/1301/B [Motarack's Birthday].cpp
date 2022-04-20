/**
 *	author: kh0i
 *	created: 14.04.2022 18:26:56
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
    int n;
    cin >> n;
    vector<ll> a(n + 1, 0);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    ll mx = INT_MIN, mn = INT_MAX;
    for(int i = 1; i <= n; ++i){
        if(a[i] != -1 and ((i < n and a[i + 1] == -1) or (i > 1 and a[i - 1] == -1))){
            mx = max(mx, a[i]);
            mn = min(mn, a[i]);
        }
    }
    ll k = (mx + mn) / 2, m = 0;
    for(int i = 1; i <= n; ++i){
        if(a[i] == -1) a[i] = k;
        if(i > 1) m = max(m, abs(a[i] - a[i - 1]));
    }
    cout << m << ' ' << k << '\n';
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


