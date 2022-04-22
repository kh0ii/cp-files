/**
 *	author: kh0i
 *	created: 10.03.2022 21:38:11
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
    int n;
    cin >> n;
    vector<int> a(n);
    a[0] = 1;
    for(int i = 1; i < n; ++i){
        a[i] = a[i - 1] * 3;
        if(a[i] > 1e9){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    for(int i : a)
        cout << i << ' ';
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

// Write stuff down

