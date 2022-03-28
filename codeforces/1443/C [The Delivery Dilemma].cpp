/**
 *	author: kh0i
 *	created: 09.03.2022 23:44:19
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
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for(ll &i : a)
        cin >> i;
    for(ll &i : b)
        cin >> i;
    ll l = 0, r = 1e12, ans;
    while(l <= r){
        ll mid = l + (r - l) / 2, total = 0;
        for(int i = 0; i < n; ++i){
            if(a[i] > mid)
                total += b[i];
        }
        if(total <= mid){
            r = mid - 1;
            ans = mid;
        }
        else l = mid + 1;
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

// Write stuff down

