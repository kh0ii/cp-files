/**
 *	author: kh0i
 *	created: 11.04.2022 20:10:14
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
    int n, m, q, y;
    cin >> n >> m;
    vector<string> a(n + 1), b(m + 1);
    for(int i = 1; i <= n; ++i){
        cin >> a[i % n];
    }
    for(int j = 1; j <= m; ++j){
        cin >> b[j % m];
    }
    cin >> q;
    while(q--){
        cin >> y;
        cout << a[y % n] << b[y % m] << '\n';
    }
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


