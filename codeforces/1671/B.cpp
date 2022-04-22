/**
 *	author: kh0i
 *	created: 22.04.2022 21:49:00
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
    int n, c = 0;
    cin >> n;
    vector<int> a(n + 1, 0);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    int f = 0;
    for(int i = 2; i <= n; ++i){
        if(a[i] - a[i - 1] >= 2){
            f++;
        }
        if(a[i] - a[i - 1] > 3){
            f = 1e8;
        }
    }
    for(int i = 2; i <= n; ++i){
        if(a[i] - a[i - 1] == 2){
            c++;
        }
        else if(a[i] - a[i - 1] > 2){
            c = 1e8;
        }
    }
    debug(f);
    cout << (f <= 1 or c <= 2 ? "YES\n" : "NO\n");
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


