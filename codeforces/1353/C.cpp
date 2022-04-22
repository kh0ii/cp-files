#include "bits/stdc++.h"
using namespace std;
#define int long long
const int mod = 1000000007; //998244353;

int n;
void solve(){
    int ans = 0;
    cin >> n;
    for(int i=3, d = 1; i<=n; i+=2, ++d){
        ans += (4*i - 4) * d;
    }
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

