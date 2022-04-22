/**
 *	author: kh0i
 *	created: 09.03.2022 08:02:18
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

int n, m, u, v, c, q;

vector<vector<pair<int, int>>> adj(105);
vector<int> vis(105, 0);

bool dfs(int x, int col, int y){
//    debug(x, col, y);
    vis[x] = 1;
    if(x == y) return 1;
    for(auto [f, s] : adj[x]){
        if(s == col and !vis[f]){
            if(dfs(f, col, y)) return 1;
        }
    }
    return 0;
}

void solve(){
    cin >> n >> m;
    for(int i = 1; i <= m; ++i){
        cin >> u >> v >> c;
        adj[u].push_back(make_pair(v, c));
        adj[v].push_back(make_pair(u, c));
    }
    cin >> q;
    for(int i = 1; i <= q; ++i){
        cin >> u >> v;
        int res = 0;
        for(int j = 1; j <= 100; ++j){
            res += dfs(u, j, v);
            fill(vis.begin(), vis.end(), 0);
        }
        cout << res << '\n';
    }
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    int test = 1;
//    cin >> test;
    for(int i=1; i<=test; ++i){
        solve();
    }
    return 0;
}

// Write stuff down

