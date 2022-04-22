#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;

void solve(){
    int n;
    cin >> n;
    string ans;
    for(int i=0; i<(n+4)/4; ++i){
        ans = "aabb" + ans;
    }
    for(int i=0; i<n; ++i)
        cout << ans[i];
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

