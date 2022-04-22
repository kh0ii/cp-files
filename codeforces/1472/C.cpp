#include "bits/stdc++.h"
using namespace std;
#define int long long
const int mod = 1000000007; //998244353;

int a[200005], f[200005], n;

void solve(){
    int ans = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        f[i] = a[i];
    }
    for(int i = n; i >= 1; --i){
        if(i + a[i] <= n)
            f[i] += f[i + a[i]];
    }
    for(int i = 1; i <= n; ++i)
        ans = max(ans, f[i]);
    cout << ans << '\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int test = 1;
    cin >> test;
    for(int i=1; i<=test; ++i){
//        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}
// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

