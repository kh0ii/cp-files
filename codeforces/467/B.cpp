#include "bits/stdc++.h"
using namespace std;
#define int long long
const int mod = 1000000007; //998244353;
int n, m, k, a[1005], x, ans;

void solve(){
    cin >> n >> m >> k;
    for(int i=0; i<m; ++i){
        cin >> a[i];
    }
    cin >> x;
    for(int i=0; i<m; ++i){
        int d = 0;
        for(int j=0; j<n; ++j){
            if((a[i] & (1 << j)) != (x & (1 << j)))
                ++d;
        }
        ans += (d <= k);
    }
    cout << ans;
}

int32_t main() {
//freopen("/home/kh0i/inp", "r", stdin);
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
