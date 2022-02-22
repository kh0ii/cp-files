#include "bits/stdc++.h"
using namespace std;

int n, a[55];

void solve(){
    int sum = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        sum += a[i];
    }
    if(sum == n)
        cout << 0;
    else if(sum < n)
        cout << 1;
    else cout << sum - n;
    cout << '\n';
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

