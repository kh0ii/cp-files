/**
 *	author: kh0i
 *	created: 31.03.2022 21:35:41
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
    ll a, b;
    cin >> a >> b;
    if(a == 0){
        cout << 1 << '\n';
        return;
    }
    else{
        cout << a + b * 2 + 1 << '\n';
    }
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

