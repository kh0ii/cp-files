/**
 *	author: kh0i
 *	created: 09.04.2022 20:34:19
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

void solve(){
    int n;
    cin >> n;    
    int mx = 0, x;
    map<int, int> mp;

    for(int i = 1; i <= n; ++i){
        cin >> x;
        mp[x]++;
    }
    for(auto k : mp){
        mx = max(mx, k.second);
    }

    int cur = mx, ans = 0;
    while(cur < n){
        ++ans;
        if(cur + cur <= n){
            ans += cur;
            cur += cur;
        }
        else{
            ans += n - cur;
            cur = n;
        }
    }
    cout << ans << '\n';
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    int test = 1;
    cin >> test;
    for(int i = 1; i <= test; ++i){
        solve();
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}

// Write stuff down

