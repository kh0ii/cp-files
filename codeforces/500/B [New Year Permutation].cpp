#include "bits/stdc++.h"
using namespace std;

int n, a[303], vis[303];
char c;
vector<int> adj[303], g, v;

void dfs(int x){
    vis[x] = 1;
    g.push_back(a[x]);
    v.push_back(x);
    for(int i : adj[x])
        if(!vis[i])
            dfs(i);
}

void solve(){
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            cin >> c;
            if(c == '1'){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    for(int i = 1; i <= n; ++i){
        if(!vis[i]){
            g.clear();
            v.clear();
            dfs(i);
            sort(v.begin(), v.end());
            sort(g.begin(), g.end());
            for(int j = 0; j < v.size(); ++j){
                a[v[j]] = g[j]; 
            }
        }
    }
    for(int i = 1; i <= n; ++i)
        cout << a[i] << ' ';
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

