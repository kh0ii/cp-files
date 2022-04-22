/**
 *	author: kh0i
 *	created: 22.04.2022 23:15:37
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

#define int long long

void solve(){
    int n, x, d = 0;
    cin >> n >> x;
    vector<int> a(n + 1);

    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        if(i > 1) d += abs(a[i] - a[i - 1]);
    }

    int pl = min(abs(a[1] - 1), abs(a[n] - 1)), pr = min(abs(a[1] - x), abs(a[n] - x));

    for(int i = 2; i <= n; ++i){
        pl = min(pl, abs(a[i] - 1) + abs(a[i - 1] - 1) - abs(a[i - 1] - a[i]));
        pr = min(pr, abs(x - a[i]) + abs(x - a[i - 1]) - abs(a[i - 1] - a[i]));
    }

    int mn = *min_element(a.begin() + 1, a.end()), mx = *max_element(a.begin() + 1, a.end());
    if(mn > 1) d += pl;
    if(mx < x) d += pr;
    cout << d << '\n';
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


