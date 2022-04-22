/**
 *	author: kh0i
 *	created: 27.03.2022 22:44:58
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
    int l, r, ans = 0;
    cin >> l >> r;
    vector<int> a(r - l + 1), cntbit(18, 0), cntbit2(18, 0), on(18, 0);
    for(int i = l; i <= r; ++i){
        cin >> a[i];
        for(int j = 0; j < 17; ++j){
            if(i & (1 << j)) ++cntbit[j];
            if(a[i] & (1 << j)) ++cntbit2[j];
        }
    }
    for(int i = 0; i < 17; ++i){
        on[i] = (cntbit[i] != cntbit2[i]);
        if(on[i]){
            ans += (1 << i);
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

