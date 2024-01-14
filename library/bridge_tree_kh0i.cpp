#include "bits/stdc++.h"
using namespace std;

#define F first
#define S second
using ll = long long; 

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
ll get_rand(ll l, ll r) {
    assert(l <= r);
    return uniform_int_distribution<ll> (l, r)(rng);
}

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

const int N = 3e5 + 3;

int n, m, ans, num[N], low[N], timeDFS, cnt, component[N], h[N];
vector<int> g[N], adj[N];
set<pair<int, int>> bridges;
bool vis[N];

void dfs(int u, int pre){
    low[u] = num[u] = ++timeDFS;
    for(int v : g[u]){
        if(v == pre) continue;
        if(num[v])
            low[u] = min(low[u], num[v]);
        else{
            dfs(v, u);
            low[u] = min(low[u], low[v]);

            if(low[v] == num[v]){
                bridges.insert({u, v});
                bridges.insert({v, u});
            }
        }
    }
}

void dfs_com(int u){
    component[u] = cnt;
    vis[u] = 1;
    for(int v : g[u]){
        if(bridges.count({u, v})) {
            if(component[v]){
                adj[component[v]].push_back(component[u]);
                adj[component[u]].push_back(component[v]);
            }
            continue;
        }
        if(vis[v]) continue;
        dfs_com(v);
    }
}

void dfs_max(int u){
    vis[u] = 1;
    for(int v : adj[u]){
        if(vis[v]) continue;
        h[v] = h[u] + 1;
        dfs_max(v);
    }
}

void solve(){
    cin >> n >> m;
    for(int i = 1; i <= m; ++i){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1, 0);
    for(int i = 1; i <= n; ++i){
        if(!vis[i]){
            ++cnt;
            dfs_com(i);
        }
    }
    for(int i = 1; i <= cnt; ++i)
        debug(i, adj[i]);
    debug(bridges);

    int x = 1;
    fill(vis, vis + n + 1, 0);
    dfs_max(1);
    for(int i = 1; i <= cnt; ++i)
        if(h[x] < h[i]) x = i;
    debug(x, h[x]);

    fill(vis, vis + cnt + 1, 0);
    fill(h, h + cnt + 1, 0);
    dfs_max(x);
    cout << *max_element(h + 1, h + cnt + 1);
}


int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    int test = 1;
//    cin >> test;
    for(int i = 1; i <= test; ++i){
//        cout << "Case #" << i << ": ";
        solve();
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}