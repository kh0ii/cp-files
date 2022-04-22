#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;
int n, a[104];
void solve(){
    cin >> n;
    map<int, int> mp;
    for(int i=0; i<n; ++i){
        cin >> a[i];
        mp[abs(a[i])]++;
    }
    int ans = 0;
    for(auto k : mp){
        if(k.first != 0) ans += min(k.second, 2);
        else ans += min(k.second, 1);
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

