/**
 *	author: kh0i
 *	created: 27.03.2022 21:47:29
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

const int mod = 998244353;
ll f[1002];
int n, x;

void solve(){
    f[1] = 0;
    f[2] = 1;
    for(int i = 3; i < 1002; ++i){
        if(i & 1) f[i] = 0;
        else f[i] = f[i - 2] * i * i / 4;
        f[i] %= mod;
    }
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> x;
        cout << f[x] << '\n';
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

