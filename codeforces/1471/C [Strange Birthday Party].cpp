/**
 *	author: kh0i
 *	created: 11.04.2022 16:20:59
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

const int N = 3e5 + 3;
int n, m;
ll c[N], k[N];

void solve(){
    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        cin >> k[i];
    }
    for(int i = 1; i <= m; ++i){
        cin >> c[i];
    }
    sort(k + 1, k + n + 1, greater<int>());
    ll kh0i = 1, duc = 0;
    for(int i = 1; i <= n; ++i){
        if(kh0i < k[i]){
            duc += c[kh0i];
            ++kh0i;
        }
        else{
            duc += c[k[i]];
        }
    }
    cout << duc << '\n';
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

