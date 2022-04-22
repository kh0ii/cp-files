/**
 *	author: kh0i
 *	created: 22.04.2022 20:32:22
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
    int n, pp, cc, p, c, f = 1;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> p >> c;
        if(c > p){
            f = 0;
        }
        if(i == 1) {
            pp = p, cc = c;
            continue;
        }
        if(c < cc or p < pp){
            f = 0;
            debug(i, c, cc, p, pp);
        }
        if(p - pp < c - cc){
            debug(i);
            f = 0;
        }
        pp = p, cc = c;
    }
    cout << (f ? "YES\n" : "NO\n");
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


