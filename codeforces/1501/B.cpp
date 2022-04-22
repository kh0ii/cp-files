/**
 *	author: kh0i
 *	created: 13.04.2022 16:44:12
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
    int n, x;
    cin >> n;    
    vector<int> d(n + 4, 0);
    for(int i = 1; i <= n; ++i){
        cin >> x;
        d[i + 1]--;
        d[max(0, i - x + 1)]++;
    }
    for(int i = 1; i <= n; ++i){
        d[i] += d[i - 1];
        cout << min(1, d[i]) << ' ';
    }
    cout << '\n';
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


