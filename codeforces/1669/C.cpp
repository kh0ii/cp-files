/**
 *	author: kh0i
 *	created: 21.04.2022 21:37:55
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
    vector<int> a(n + 3);
    int f = 1;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    int p1 = a[1] & 1, p2 = a[2] & 1;
    for(int i = 1; i <= n; i += 2){
        if((a[i] & 1) != p1) f = 0;
        if(i + 1 <= n and (a[i + 1] & 1) != p2) f = 0;
    }
    cout << (f ? "YES\n" : "NO\n");
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


