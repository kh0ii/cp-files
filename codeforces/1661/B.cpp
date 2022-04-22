/**
 *	author: kh0i
 *	created: 09.04.2022 21:45:46
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

const ll mod = 32768;

void solve(){
    int n;
    cin >> n;
    vector<ll> a(n + 1);
    vector<ll> p;
    ll nmod = mod;
    while(nmod > 0){
        p.push_back(nmod);
        nmod /= 2;
    }
    debug(p);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        ll ans = 15;
        for(ll j = 0; j <= 15; ++j){
            ll k = (1ll << j);
            ll ne = (a[i] + k - 1) / k;
            ne *= k;
            if(ne < a[i]) continue;
//            debug(a[i], ne);
            ans = min(ans, ne - a[i] + (15 - j));
        }
        cout << ans << " ";
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

// Write stuff down

