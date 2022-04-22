/**
 *	author: kh0i
 *	created: 09.04.2022 22:08:58
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

const int N = 3e5 + 5;
ll a[N], n;

ll calc(ll x){
    ll reqo = 0, reqt = 0;
    for(int i = 1; i <= n; ++i){
        ll f = x - a[i];
        if(f & 1) ++reqo;
        reqt += f - (f & 1);
    }
    ll l = 0, r = 1e18, ans = 0;
    while(l <= r){
        ll mid = l + (r - l) / 2;
        ll e = mid / 2, o = mid - e;
        bool flag = 1;
        if(o < reqo) flag = 0;
        o -= reqo;
        flag &= (reqt <= e * 2 + o - (o & 1));
        if(flag){
            r = mid - 1;
            ans = mid;
        }
        else l = mid + 1;
    }
    return ans;
}

void solve(){
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    cout << min(calc(a[n]), calc(a[n] + 1)) << '\n';
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

