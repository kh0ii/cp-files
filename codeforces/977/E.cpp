#include "bits/stdc++.h"
using namespace std;

int n, m, u, v, vis[200005], ans, f;
vector<int> adj[200005], com;

void dfs(int x){
    vis[x] = 1;
    com.push_back(x);
    for(int i : adj[x]){
        if(!vis[i])
            dfs(i);
    }
}

void solve(){
    cin >> n >> m;
    for(int i = 1; i <= m; ++i){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 1; i <= n; ++i){
        if(!vis[i]){
            f = 1;
            com.clear();
            dfs(i);
            for(int j : com){
                if(adj[j].size() != 2){
                    f = 0;
                    break;
                }
            }
            ans += f;
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

