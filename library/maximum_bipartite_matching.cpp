struct matcher{
    const int INF = 1e9;
    int n, m;
    vector<int> matchX, matchY;
    vector<bool> vis;
    vector<vector<int>> g;
    int matched;

    matcher(int _n, int _m) :
        n(_n), m(_m),
        matchX(n + 1, -1), matchY(m + 1, -1), vis(n + 1),
        g(n + 1),
        matched(0) {}

    void add_edge(int u, int v){
        g[u].push_back(v);
    }

    bool dfs(int u){
        if(vis[u])
            return 0;
        vis[u] = 1;
        for(int v : g[u]){
            if(matchY[v] == -1 or dfs(matchY[v])){
                matchX[u] = v;
                matchY[v] = u;
                return 1;
            }
        }
        return 0;
    }

    void match(){
        for(int u = 1; u <= n; ++u){
            fill(vis.begin(), vis.end(), 0);
            if(dfs(u))
                ++matched;
        }
    }
};