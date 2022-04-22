/**
 *	author: kh0i
 *	created: 31.03.2022 21:37:56
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
    vector<ll> a(n);
    for(ll &i : a){
        cin >> i;
    }
    sort(a.rbegin(), a.rend());
    a[0]--;
    if(a[0] == 0){
        cout << "YES\n";
        return;
    }
    for(ll i = 1; i < n; ++i){
        if(a[i] >= a[0]){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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

