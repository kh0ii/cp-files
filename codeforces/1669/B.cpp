/**
 *	author: kh0i
 *	created: 21.04.2022 21:36:37
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
    map<int, int> mp;
    for(int i= 1; i <= n; ++i){
        cin >> x;
        mp[x]++;
    }
    for(auto k : mp){
        if(k.second >= 3){
            cout << k.first << '\n';
            return;
        }
    }
    cout << -1 << "\n";
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


