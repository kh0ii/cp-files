/**
 *	author: kh0i
 *	created: 21.04.2022 14:30:07
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
    cin >> n;
    vector<ll> a(n + 3);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    ll l = 1, r = n, la = 0, ra = 0, pre = 0, t = 0;
    while(l <= r){
        ll sum = 0;
        if(t % 2 == 0){
            while(sum <= pre and l <= r){
                sum += a[l++];
            }
        }
        else {
            while(sum <= pre and l <= r){
                sum += a[r--];
            }
        }
        if(t % 2 == 0) la += sum;
        else ra += sum;
        ++t;
        if(sum <= pre) break;
        pre = sum;
    }
    cout << t << " " << la << " " << ra << '\n';
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


