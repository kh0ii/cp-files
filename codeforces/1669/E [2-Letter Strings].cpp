/**
 *	author: kh0i
 *	created: 21.04.2022 21:50:08
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
    vector<string> s(n + 1);
    vector<vector<ll>> a(27, vector<ll>(27, 0)), b(27, vector<ll>(27, 0));
    for(int i = 1; i <= n; ++i){
        cin >> s[i];
        a[s[i][0] - 'a'][s[i][1] - 'a']++;
        b[s[i][1] - 'a'][s[i][0] - 'a']++;
    }
    for(int i = 0; i < 27; ++i){
        for(int j = 0; j < 27; ++j){
            for(int k = j + 1; k < 27; ++k){
                ans += a[i][j] * a[i][k];
                ans += b[i][j] * b[i][k];
            }
        }
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


