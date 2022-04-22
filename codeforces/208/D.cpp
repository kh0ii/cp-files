#include "bits/stdc++.h"
using namespace std;

#define int long long

int n, a[55], c[6], ans[6], cur;

void solve(){
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    for(int i = 1; i <= 5; ++i)
        cin >> c[i];

    for(int i = 1; i <= n; ++i){
        cur += a[i];
        for(int j = 5; j >= 1; --j){
            ans[j] += cur / c[j];
            cur = cur % c[j];
        }
    }
    for(int i = 1; i <= 5; ++i)
        cout << ans[i] << ' ';
    cout << '\n' << cur;
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

