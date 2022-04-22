/**
 *	author: kh0i
 *	created: 08.03.2022 22:05:10
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

#define int long long

void solve(){
    int l, r, a;
    cin >> l >> r >> a;
    int f1 = r / a;
    int f2 = f1 - 1;
    if(f1 * a - 1 < l) cout << f1 + r % a << '\n';
    else cout << max(f1 + r % a, f2 + a - 1) << "\n";
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    int test = 1;
    cin >> test;
    for(int i=1; i<=test; ++i){
        solve();
    }
    return 0;
}

// Write stuff down

