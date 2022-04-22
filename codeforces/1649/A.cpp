#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n, cnt = 1;
    cin >> n;
    vector<int> a(n);
    for(int &i : a)
        cin >> i;
    for(int i = n - 1; i >= 1 and a[i - 1]; --i, ++cnt);
    n -= cnt;
    cnt = 0;
    for(int i = 0; i < n - 1 and a[i + 1]; ++i, ++cnt);
//    cout << cnt << '\n';
    cout << n - cnt << '\n';
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

