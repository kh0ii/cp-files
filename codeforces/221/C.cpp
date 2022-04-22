#include "bits/stdc++.h"
using namespace std;

int n, a[100005], b[100005], f;

void solve(){
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b + 1, b + n + 1);
    for(int i = 1; i <= n; ++i){
        if(a[i] != b[i])
            f = f + 1;
    }
    cout << (f > 2 ? "NO" : "YES");
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

