#include "bits/stdc++.h"
using namespace std;
#define int long long
const int inf = 1e9+9, mod = 1000000007; //998244353;
int n, k, a[100005], b[100005], dp[100005], p[100005];
void solve(){
    cin >> n >> k;
    for(int i=1; i<=n; ++i){
        cin >> a[i];
        p[i] = p[i-1] + a[i];
    }
    for(int i=1; i<=n; ++i)
        cin >> b[i];
    for(int i=1; i<=n; ++i){
        dp[i] += dp[i-1];
        if(b[i])
            dp[i] += a[i];
    }
    int ans = 0;
    for(int i=1; i<=n-k+1; ++i){
        int d = dp[i-1] + p[i+k-1] - p[i-1] + dp[n] - dp[i+k-1];
        ans = max(ans, d);
    }
    cout << ans;
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

