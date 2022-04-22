/**
 *	author: kh0i
 *	created: 14.03.2022 08:00:51
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
    for(ll &i : a){
        cin >> i;
    }
    ll l = 1, r = 1e12, ans = 0;
    while(l <= r){
        ll mid = l + (r - l) / 2, f = 1;
        for(int i = 0; i < n; ++i){
            b[i] = a[i];
        }
        for(int i = n - 1; i >= 2; --i){
            if(b[i] < mid){
                f = 0;
                break;
            }
            ll d = min(b[i] - mid, a[i]) / 3;
            b[i - 2] += 2 * d;
            b[i - 1] += d;
        }
//        debug(b, mid);
        if(f and b[0] >= mid and b[1] >= mid){
            l = mid + 1;
            ans = mid;
        }
        else{
            r = mid - 1;
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

// Write stuff down

