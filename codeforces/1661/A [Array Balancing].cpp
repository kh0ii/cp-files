/**
 *	author: kh0i
 *	created: 09.04.2022 21:35:29
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
    ll ans = 0;
    cin >> n;
    vector<ll> a(n + 1), b(n + 1);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    for(int i = 1; i <= n; ++i){
        cin >> b[i];
        if(a[i] < b[i]) swap(a[i], b[i]);
    }
    for(int i = 2; i <= n; ++i){
        ans += abs(a[i] - a[i - 1]) + abs(b[i] - b[i - 1]);
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

