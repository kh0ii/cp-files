#include "bits/stdc++.h"
using namespace std;
#define int long long
const int inf = 1e9+9, mod = 1e9+7;

int n, x, y, ans[200005];
map<int, int> mp;

void solve(){
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> x >> y;
        mp[x]++;
        mp[y+1ll]--;
    }
    int cur = 0ll, l = 0ll;
    for(auto d : mp){
        ans[cur] += d.first - l;
        cur += d.second;
        l = d.first;
    }
    for(int i = 1; i <= n; ++i)
        cout << ans[i] << '\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    //cin >> t;
    while(t--)
    	solve();
    return 0;
}



