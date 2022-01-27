#include "bits/stdc++.h"
using namespace std;
#define int long long
const int mod = 1000000007; //998244353;
int n, a = 1, b = 0, ta, tb;
void solve(){
    cin >> n;
    for(int i=1; i<=n; ++i){
        ta = b * 3ll % mod;
        tb = (a + b * 2ll) % mod;
        a = ta; b = tb;
    }
    cout << a;
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

