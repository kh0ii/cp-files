/**
 *	author: kh0i
 *	created: 11.04.2022 20:20:35
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
    vector<string> a(n + 1);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    map<char, int> mp;
    for(int i = 1; i <= n; ++i){
        mp[a[i][0]]++;
    }
    for(auto k : mp){
        ll f = k.second / 2, s = k.second - f;
        ans += f * (f - 1) / 2;
        ans += s * (s - 1) / 2;
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


