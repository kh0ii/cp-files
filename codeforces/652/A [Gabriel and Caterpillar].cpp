/**
 *	author: kh0i
 *	created: 08.03.2022 16:38:27
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

void solve(){
    int h1, h2, a, b;
    cin >> h1 >> h2 >> a >> b;
    if(h1 + 8 * a >= h2){
        cout << 0;
    } else if(a > b){
        int d = h2 - h1 - 8 * a, f = 12 * (a - b);
        cout << (d + f - 1) / f;
    } else {
        cout << -1;
    }
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    int test = 1;
//    cin >> test;
    for(int i=1; i<=test; ++i){
        solve();
    }
    return 0;
}

// Write stuff down

