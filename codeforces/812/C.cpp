/**
 *	author: kh0i
 *	created: 19.03.2022 13:17:04
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

ll n, s, a[100003];

void solve(){
    cin >> n >> s;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    ll l = 0, r = n, ans = 0, cost = 0;
    while(l <= r){
        ll mid = l + (r - l) / 2;
        vector<ll> b;
        ll total = 0, cnt = 0;

        for(int i = 1; i <= n; ++i){
            b.push_back(a[i] + i * mid);
        }
        sort(b.begin(), b.end());

        for(int i = 0; i < mid; ++i){
            ++cnt;
            total += b[i];
        }
        if(total > s){
            r = mid - 1;
        }
        else{
            ans = cnt;
            cost = total;
            l = mid + 1;
        }
    }
    cout << ans << ' ' << cost;
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

