/**
 *	author: kh0i
 *	created: 29.03.2022 00:09:11
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
    ll m, total = 0, res, cur;
    cin >> n >> m;

    vector<ll> a(n + 1), cnt(101, 0);

    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        total += a[i];
        cur = total - m;
        res = 0;
        for(int j = 100; j >= 1 and cur > 0; --j){
            if(cur <= j * cnt[j]){
                res += (cur + j - 1) / j;
                break;
            }
            res += cnt[j];
            cur -= cnt[j] * j;
        }
        cnt[a[i]]++;
        cout << res << ' ';
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

