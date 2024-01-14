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

const int N = 1e4 + 3;

int n, m, low[N], num[N], timeDFS;
vector<int> g[N];
bool joint[N];
int cnt_bridges, cnt_joints;

void dfs(int u, int pre){
    num[u] = low[u] = ++timeDFS;
    int child = 0;
    for(int v : g[u]){
        if(v == pre) continue;
        if(num[v]){
            // visited (back - edges)
            low[u] = min(low[u], num[v]);
        }
        else{
            ++child;
            // not visited (span - edges);
            dfs(v, u);
            low[u] = min(low[u], low[v]);

            cnt_bridges += (low[v] == num[v]);

            if(u == pre and child > 1) // u is root and have at least 2 children
                joint[u] = 1;
            else if(u != pre and low[v] >= num[u])
                joint[u] = 1;
        }
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
    for(int i = 1; i <= n; ++i)
        if(!num[i])
            dfs(i, i);
    for(int i = 1; i <= n; ++i)
        cnt_joints += joint[i];
    cout << cnt_joints << ' ' << cnt_bridges;
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
