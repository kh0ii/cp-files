/**
 *	author: kh0i
 *	created: 24.04.2022 15:01:17
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
    int a, b, n;
    cin >> n >> a >> b;
    for(int x = 100; x >= 1; --x){
        if(a / x + b / x >= n and a / x > 0 and b / x > 0){
            cout << x;
            return;
        }
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


