struct DSU{
    vector<ll> p, sz;
    int comp;

    void init(int n){
        p.resize(n + 2, 0);
        sz.resize(n + 2, 0);
        comp = n;
        for(int i = 1; i <= n; ++i)
            p[i] = i, sz[i] = 1;
    }

    int find_set(int u){
        return u == p[u] ? u : p[u] = find_set(p[u]);
    }

    bool join_sets(int u, int v){
        u = find_set(u), v = find_set(v);
        if(u == v)
            return 0;
        --comp;
        if(sz[u] < sz[v])
            swap(u, v);
        p[v] = u;
        sz[u] += sz[v];
        return 1;
    }
};