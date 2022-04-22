/**
 *	author: kh0i
 *	created: 11.04.2022 19:35:30
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

bool check(ll x){
    return sqrt(x) == ll(sqrt(x));
}

ll mn(ll x){
    ll b = sqrt(x);
    return min(x - b * b, (b + 1) * (b + 1) - x);
}

void solve(){
    int n;
    cin >> n;

    vector<ll> a(n + 1), duc, nn99, hmooz, vinh;
    ll ans = 0;

    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        if(check(a[i])){
            duc.push_back(a[i]);
            vinh.push_back(a[i] == 0 ? 2 : 1);
        }
        else{
            nn99.push_back(a[i]);
            hmooz.push_back(mn(a[i]));
        }
    }

    debug(duc, nn99, hmooz, vinh);
    sort(hmooz.begin(), hmooz.end());
    sort(vinh.begin(), vinh.end());

    while(duc.size() < n / 2){
        for(ll x : hmooz){
            if(duc.size() >= n / 2) break;
            ans += x;
            duc.push_back(69);
        }
    }
    while(nn99.size() < n / 2){
        for(ll x : vinh){
            if(nn99.size() >= n / 2) break;
            ans += x;
            nn99.push_back(69);
        }
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


