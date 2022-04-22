/**
 *	author: kh0i
 *	created: 09.03.2022 18:17:30
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
    int n, m, total = 0;
    cin >> n >> m;
    vector<int> a(n), f;
    for(int &i : a){
        cin >> i;
        total += i;
    }
    int req = 0, p = 0;
    sort(a.begin(), a.end());
    for(int i = 0; i < n; ++i){
        req = req + 1;
        if(a[i] > p)
            ++p;
    }
    req += a.back() - p;
    cout << total - req;
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

