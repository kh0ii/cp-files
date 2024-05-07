struct DSU_rb{
    int n;
    vector<int> p;
    vector<array<int, 4>> ops;

    void init(int _n){
        n = _n;
        p.resize(n + 2, -1);
    }

    int find_set(int u) { return p[u] < 0 ? u : find_set(p[u]); }
    bool same_set(int u, int v) { return find_set(u) == find_set(v); }

    int get_time() { return sz(ops); }

    bool join_sets(int u, int v){
        u = find_set(u), v = find_set(v);
        if(u == v)
            return 0;
        ops.push_back({u, p[u], v, p[v]});
        if(p[u] > p[v])
            swap(u, v);
        p[u] += p[v];
        p[v] = u;
        return 1;
    }

    void rollback(int t){
        while(sz(ops) > t){
            array<int, 4> x = ops.back();
            ops.pop_back();
            p[x[0]] = x[1];
            p[x[2]] = x[3];
        }
    }
};
