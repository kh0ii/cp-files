/**
 *	author: kh0i
 *	created: 23.04.2022 21:17:24
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
    int n, ans = 0, f = 1e9, s = 0;
    cin >> n;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        if(i > 1 and a[i] == a[i - 1]){
            f = min(f, i);
            s = max(s, i);
        }
    }
    --s;
    debug(f, s);
    cout << max(0, s - f + (f == s)) << '\n';
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


