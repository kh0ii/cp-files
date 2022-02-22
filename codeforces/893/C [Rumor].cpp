#include "bits/stdc++.h"
using namespace std;
#define int long long

int n, m, c[100005], vis[100005], u, v, ans, mn;
vector<int> adj[100005], g;

void dfs(int x){
    vis[x] = 1;
    g.push_back(x);
    for(int i : adj[x])
        if(!vis[i])
            dfs(i);
}

void solve(){
    cin >> n >> m;
    for(int i = 1; i <= n; ++i)
        cin >> c[i];
    for(int i = 1; i <= m; ++i){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 1; i <= n; ++i){
        if(!vis[i]){
            g.clear();
            mn = 2e9;
            dfs(i);
            for(int j : g)
                mn = min(mn, c[j]);
            ans += mn;
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

