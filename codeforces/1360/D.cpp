#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;
int n, k;
void solve(){
    cin >> n >> k;
    int ans = n;
    for(int i=1; i*i<=n; ++i){
        if(n % i == 0){
            if(i <= k)
                ans = min(ans, n/i);
            if (n/i <= k)
                ans = min(ans, i);
        }
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

