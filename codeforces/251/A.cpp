#include "bits/stdc++.h"
using namespace std;

#define int long long

int ans, n, d, x;

void solve(){
    cin >> n >> d;
    vector<int> a(n + 1, -2e9);
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    sort(a.begin(), a.end());
    for(int i = 1; i <= n - 2; ++i){
        auto f = upper_bound(a.begin(), a.end(), a[i] + d);
        --f;
        auto k = f - a.begin();
        x = k - i;
        ans += x * (x - 1) / 2;
    }
    cout << ans;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int test = 1;
//    cin >> test;
    for(int i=1; i<=test; ++i){
        solve();
    }
    return 0;
}
// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

