/**
 *	author: kh0i
 *	created: 15.03.2022 20:36:47
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

#define int long long
inline int gcd(int a, int b) { int r; while (b) {r = a % b; a = b; b = r;} return a; }

const int maxn = 2e5 + 3;
int n, m, a[maxn], b[maxn], g = 0;

void solve(){
    cin >> n >> m;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for(int i = 1; i <= m; ++i)
        cin >> b[i];
    for(int i = 2; i <= n; ++i)
        g = gcd(g, a[i] - a[1]);
    for(int i = 1; i <= m; ++i)
        cout << gcd(g, a[1] + b[i]) << ' ';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int test = 1;
//    cin >> test;
    for(int i=1; i<=test; ++i){
        solve();
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}

// Write stuff down

