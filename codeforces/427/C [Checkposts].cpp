#include "bits/stdc++.h"
using namespace std;
#define int long long
const int mod = 1000000007; //998244353;

int n, m, cost[100005], vis[100005], ans, mn, ways = 1;
vector<int> adj[100005], adj_rev[100005], component;
stack<int> s;

void dfs1(int x){
    vis[x] = 1;
    for(int i : adj[x]){
        if(!vis[i])
            dfs1(i);
    }
    s.push(x);
}

void dfs2(int x){
    vis[x] = 1;
    component.push_back(x);
    for(int i : adj_rev[x]){
        if(!vis[i])
            dfs2(i);
    }
}

void find(){
    for(int i = 1; i <= n; ++i){
        if(!vis[i])
            dfs1(i);
    }
    for(int i = 1; i <= n; ++i)
        vis[i] = 0;
    while(!s.empty()){
        int v = s.top(), cnt = 0;
        s.pop();
        if(!vis[v]){
            component.clear();
            mn = 2e9;
            dfs2(v);
            for(int i : component)
                mn = min(mn, cost[i]);
            for(int i : component)
                cnt += (cost[i] == mn);
            ans += mn;
            ways = ((ways % mod) * (cnt % mod)) % mod;
        }
    }
}

void solve(){
    int u, v;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> cost[i];
    }
    cin >> m;
    for(int i = 1; i <= m; ++i){
        cin >> u >> v;
        adj[u].push_back(v);
        adj_rev[v].push_back(u);
    }
    find();
    cout << ans << ' ' << ways;
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

