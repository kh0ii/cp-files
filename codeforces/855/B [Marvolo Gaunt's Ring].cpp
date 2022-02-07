#include "bits/stdc++.h"
using namespace std;
#define int long long
const int mod = 1000000007; //998244353;

int n, p, q, r, a[100005], f[3][100005];

void solve(){
    cin >> n >> p >> q >> r;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    f[0][1] = a[1] * p;
    f[1][1] = a[1] * p + a[1] * q;
    f[2][1] = a[1] * p + a[1] * q + a[1] * r;
    for(int i = 2; i <= n; ++i)
        f[0][i] = max(f[0][i-1], a[i] * p);
    for(int i = 2; i <= n; ++i)
        f[1][i] = max(f[1][i-1], f[0][i] + a[i] * q);
    for(int i = 2; i <= n; ++i)
        f[2][i] = max(f[2][i-1], f[1][i] + a[i] * r);
    cout << f[2][n];
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int test = 1;
//    cin >> test;
    for(int i=1; i<=test; ++i){
//        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}
// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

