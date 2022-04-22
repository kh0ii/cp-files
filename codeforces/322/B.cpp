#include "bits/stdc++.h"
using namespace std;
#define int long long

int r, g, b, ans, d;

void solve(){
    cin >> r >> g >> b;
    ans = r / 3 + g / 3 + b / 3;
    for(int i = 0; i < min(3ll, min(r, min(g, b))); ++i){
        r -= i, g -=i, b -= i;
        ans = max(ans, r / 3 + g / 3 + b / 3 + i);
        r += i, g += i, b += i;
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

