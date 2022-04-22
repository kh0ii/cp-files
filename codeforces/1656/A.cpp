/**
 *	author: kh0i
 *	created: 24.03.2022 21:34:58
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
    int n, mn = -1, mx = -1;
    cin >> n;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        if(a[i] > a[mx] or mx == -1){
            mx = i;
        }
        if(a[i] < a[mn] or mn == -1){
            mn = i;
        }
    }
    cout << mn << ' ' << mx << '\n';
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

