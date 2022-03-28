/**
 *	author: kh0i
 *	created: 14.03.2022 08:31:51
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

#define ll long long

void solve(){
    ll ans = 0;
    vector<ll> a(4);
    for(ll &i : a)
        cin >> i;
    do{
        ans = max(ans, min(a[0], a[1]) * min(a[2], a[3]));
    }while(next_permutation(a.begin(), a.end()));
    cout << ans << "\n";
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

