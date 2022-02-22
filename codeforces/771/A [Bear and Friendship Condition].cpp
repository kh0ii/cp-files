#include "bits/stdc++.h"
using namespace std;

int n, m, a, b, vis[150005];
vector<int> adj[150005], g;

void dfs(int x){
    vis[x] = 1;
    g.push_back(x);
    for(int i : adj[x])
        if(!vis[i])
            dfs(i);
}

void solve(){
    cin >> n >> m;
    for(int i = 1; i <= m; ++i){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i = 1; i <= n; ++i){
        if(!vis[i]){
            g.clear();
            dfs(i);
            for(int j : g){
                if(adj[j].size() != g.size() - 1){
                    cout << "NO";
                    return;
                }
            }
        }
    }
    cout << "YES";
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

