#include "bits/stdc++.h"
using namespace std;
#define int long long
const int mod = 1000000007; //998244353;
int n, m, row[2][55], col[2][55], d;

int get(int k){
    return (1ll << k) - k - 1;
}

void solve(){
    cin >> n >> m;
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            cin >> d;
            ++col[d][j];
            ++row[d][i];
        }
    }
    int ans = 0;
    for(int i=0; i<n; ++i)
        ans += get(row[0][i]) + get(row[1][i]);
    for(int i=0; i<m; ++i)
        ans += get(col[0][i]) + get(col[1][i]);
    cout << ans + n * m;
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

