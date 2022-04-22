#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, l, r, x; cin>>n>>l>>r>>x;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    int ans = 0;
    for(int mask = 0; mask < (1 << n); mask++){
        int mn = inf, mx = -inf, total = 0, cnt = 0;
        for(int i=0; i<n; i++){
            if(mask & (1 << i)){
                mn = min(mn, a[i]);
                mx = max(mx, a[i]);
                total += a[i];
                cnt++;
            }
        }
        if(mx - mn >= x and total <= r and total >= l and cnt >= 2) ans++;
    }
    cout<<ans;
    return 0;
}



