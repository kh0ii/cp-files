/**
 *	author: kh0i
 *	created: 24.04.2022 14:54:05
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
    int n, x = 2e9, f = 0, s = 0, ans = 2e9;
    cin >> n;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        x = min(a[i], x);
    } 
    for(int i = 1; i <= n; ++i){
        if(a[i] == x){
            s = max(s, i);
            if(f != 0) {
                ans = min(ans, s - f);
                debug(s, f);
            }
            f = max(f, i);
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


