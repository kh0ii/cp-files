#include "bits/stdc++.h"
using namespace std;
#define int long long
int n, k, a[200005];

bool check(int d){
    int need = 0;
    for(int i = (n + 1) / 2; i <= n; ++i){
        if(a[i] >= d) continue;
        need += d - a[i];
    }
    return need <= k;
}

void solve(){
    cin >> n >> k;
    for(int i = 1 ; i <= n; ++i){
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    int ans = a[(n + 1) / 2], l = ans, r = 2e9 + 3ll;
    while(l <= r){
        int mid = l + (r - l) / 2;
        if(check(mid)){
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
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

