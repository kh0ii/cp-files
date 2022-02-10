#include "bits/stdc++.h"
using namespace std;

int n, a[100005];

void solve(){
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a, a+n);
    vector<int> f;
    int sum = a[0], ans = 1;
    for(int i = 1; i < n; ++i){
        if(sum <= a[i]){
            sum += a[i];
            ++ans;
        }
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

