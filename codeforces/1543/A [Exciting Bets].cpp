#include "bits/stdc++.h"
using namespace std;
#define int long long
const int mod = 1000000007; //998244353;

int a, b;

void solve(){
    cin >> a >> b;
    if(b < a) swap(a, b);
    int mx = b - a;
    if(mx == 0){
        cout << "0 0\n";
    }
    else {
        int f = a / mx;
        cout << mx << ' ' << min((f + 1) * mx - a, a - f * mx) << '\n';
    }
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
  
