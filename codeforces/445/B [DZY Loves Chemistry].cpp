#include "bits/stdc++.h"
using namespace std;
#define int long long
const int mod = 1000000007; //998244353;

int n, m, par[60], ans = 1;
unordered_map<int, int> mp;

int find(int x){
    if(par[x] <= 0)
        return x;
    else return par[x] = find(par[x]);
}

void unite(int x, int y){
    x = find(x), y = find(y);
    if(find(x) == find(y))
        return;
    if(par[y] < par[x])
        swap(x, y);
    par[x] += par[y];
    par[y] = x;
}

void solve(){
    int x, y;
    cin >> n >> m;
    for(int i = 1; i <= m; ++i){
        cin >> x >> y;
        unite(x, y);
    }
    for(int i = 1; i <= n; ++i)
        mp[find(i)]++;
    for(auto k : mp){
        ans *= powl(2ll, k.second - 1ll);
//        cout << k.first << ' ' << k.second << '\n';
    }
    cout << ans;
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

