#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n, x;
    cin >> n;
    vector<int> a(n + 1), b(n + 1), l(n + 1, 0), r(n + 1, 0);
    for(int i = 1; i <= n; ++i){
        cin >> x;
        a[x] = i;
    }
    for(int i = 1; i <= n; ++i){
        cin >> x;
        b[x] = i;
    }
    for(int i = 1; i <= n; ++i){
        if(a[i] == b[i]){
            l[0]++;
            r[0]++;
        }
        else if(a[i] > b[i]){
            l[a[i] - b[i]]++;
            r[n - a[i] + b[i]]++;
        }
        else {
            l[a[i] + n - b[i]]++;
            r[b[i] - a[i]]++;
        }
    }
    int ans = 0;
    for(int i = 0; i <= n; ++i){
        ans = max(ans, max(l[i], r[i]));
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

