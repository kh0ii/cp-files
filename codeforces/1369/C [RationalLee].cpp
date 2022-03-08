#include "bits/stdc++.h"
using namespace std;

#define ll long long

void solve(){
    int n, m;
    cin >> n >> m;
    vector<ll> a(n + 1, -2e9), b(m + 1);
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    for(int i = 1; i <= m; ++i)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll ans = 0;
    int j = n - m + 1;
    for(int i = n - m + 1; i <= n; ++i)
        ans += a[i];
    for(int i = 1; i <= m; ++i){
        j = j - b[i] + 1;
        if(b[i] == 1)
            ans += a[n - i + 1];
        else
            ans += a[j];
    }
    cout << ans << '\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int test = 1;
    cin >> test;
    for(int i=1; i<=test; ++i){
        solve();
    }
    return 0;
}
// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

