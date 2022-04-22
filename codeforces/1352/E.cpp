/**
 *	author: kh0i
 *	created: 21.04.2022 14:43:08
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
    vector<int> a(n + 1, 0), p(n + 1), mark(n + 1, 0);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    partial_sum(a.begin(), a.end(), p.begin());
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j < i; ++j){
            if(p[i] - p[j - 1] <= n){
                mark[p[i] - p[j - 1]] = 1;
            }
        }
    }
    for(int i = 1; i <= n; ++i){
        ans += mark[a[i]];
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


