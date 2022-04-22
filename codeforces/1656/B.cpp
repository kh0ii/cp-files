/**
 *	author: kh0i
 *	created: 24.03.2022 21:40:54
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

ll n, k, a[200005];

void solve(){
    cin >> n >> k;
    map<ll, bool> mp;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    sort(a + 1, a + n + 1, greater<int>());
    for(int i = 1; i <= n; ++i){
        if(mp.count(k + a[i])){
            cout << "YES\n";
            return;
        }
        mp[a[i]] = 1;
    }
    cout << "NO\n";
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

