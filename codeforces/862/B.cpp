#include "bits/stdc++.h"
using namespace std;
#define int long long
int n, color[100005], u, v;
vector<int> adj[100005];

void dfs(int x, int col){
    color[x] = col;
    for(int i : adj[x]){
        if(!color[i])
            dfs(i, (col == 1 ? 2 : 1));
    }
}

void solve(){
    cin >> n;
    for(int i = 1; i < n; ++i){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, 1);
    int left = 0, right = 0;
    for(int i = 1; i <= n; ++i){
        if(color[i] == 1) ++left;
        else if(color[i] == 2) ++right;
//        cout << color[i] << ' ';
    }
    cout << left * right - n + 1;
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

