#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;

int n, a[505], k;

void solve(){
    cin >> n >> k;
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    int ans = 0;
    for(int i = 1; i < n; ++i){
        if(a[i] + a[i-1] < k){
            ans += (k - a[i] - a[i-1]);
            a[i] += (k - a[i] - a[i-1]);
        }
    }
    cout << ans << '\n';
    for(int i = 0; i < n; ++i)
        cout << a[i] << ' ';
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

