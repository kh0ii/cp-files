const ll INF = 1e18;
struct Dinic{
    const static bool SCALING = false; // scaling = EV log(max C) with larger constant
    ll lim = 1;

    struct Edge{
        int u, v;
        ll cap, flow;
    };

    int n, s, t;
    vector<int> level, ptr;
    vector<Edge> e;
    vector<vector<int>> g;

    Dinic(int _n) : n(_n), level(_n), ptr(_n), g(_n){
        e.clear();
        for(int i = 0; i < n; ++i){
            ptr[i] = 0;
            g[i].clear();
        }
    }

    void add_edge(int u, int v, ll c){
        debug(u, v, c);
        g[u].push_back(sz(e));
        e.push_back({u, v, c, 0});
        g[v].push_back(sz(e));
        e.push_back({v, u, 0, 0});
    }

    ll get_max_flow(int _s, int _t){
        s = _s, t = _t;
        ll flow = 0;
        for(lim = SCALING ? (1 << 30) : 1; lim > 0; lim >>= 1){
            while(1){
                if(!bfs()) break;
                fill(all(ptr), 0);
                while(ll pushed = dfs(s, INF))
                    flow += pushed;
            }
        }
        return flow;
    }

private:
    bool bfs(){
        queue<int> q;
        q.push(s);
        fill(all(level), -1);
        level[s] = 0;
        while(!q.empty()){
            int u = q.front();
            q.pop();
            for(int id : g[u]){
                if(e[id].cap - e[id].flow < 1)
                    continue;
                if(level[e[id].v] != -1)
                    continue;
                if(SCALING and e[id].cap - e[id].flow < lim)
                    continue;
                level[e[id].v] = level[u] + 1;
                q.push(e[id].v);
            }
        }
        return level[t] != -1;
    }

    ll dfs(int u, ll flow){
        if(!flow)
            return 0;
        if(u == t)
            return flow;
        for(; ptr[u] < sz(g[u]); ++ptr[u]){
            int id = g[u][ptr[u]], to = e[id].v;
            if(level[to] != level[u] + 1)
                continue;
            ll pushed = dfs(to, min(flow, e[id].cap - e[id].flow));
            if(pushed){
                e[id].flow += pushed;
                e[id ^ 1].flow -= pushed;
                return pushed;
            }
        }
        return 0;
    }
};