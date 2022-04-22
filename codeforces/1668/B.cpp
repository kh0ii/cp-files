/**
 *	author: kh0i
 *	created: 19.04.2022 21:49:59
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

ll n, m, a[100004];

void solve(){
    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    sort(a + 1, a + n + 1, greater<int>());
    ll total = a[1] * 2 + 1;
    for(int i = 2; i < n; ++i){
        total += a[i] + 1;
    }
    debug(total);
    if(total >= m){
        cout << "NO\n";
    }
    else cout << "YES\n";
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


