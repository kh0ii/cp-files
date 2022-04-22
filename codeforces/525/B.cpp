/**
 *	author: kh0i
 *	created: 09.03.2022 08:50:26
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

void solve(){
    string s;
    int m, x, n;
    cin >> s;
    cin >> m;
    n = s.size();
    vector<int> f(n + 2, 0);
    for(int i = 1; i <= m; ++i){
        cin >> x;
        f[x]++;
        f[n - x + 2]--;
    }
    for(int i = 1; i <= n; ++i){
        f[i] += f[i - 1];
//        f[i] = f[i] % 2;
    }
    debug(f);
    f[n + 1] = 0;
    int l = 1, r = n;
    while(l <= r){
        if(f[l] == f[r] and f[l] & 1)
            swap(s[l - 1], s[r - 1]);
        ++l; --r;
    }
    cout << s;
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    int test = 1;
//    cin >> test;
    for(int i=1; i<=test; ++i){
        solve();
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}

// Write stuff down

