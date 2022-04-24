/**
 *	author: kh0i
 *	created: 23.04.2022 21:03:20
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
    int n, x, ans = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> x;
        --x;
        ans += (x & 1);
    }
    cout << (ans & 1 ? "errorgorn" : "maomao90") << "\n";
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


