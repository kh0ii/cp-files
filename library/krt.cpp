struct KRT{
    int n, id;
    vector<int> e;
    vector<int> p;
    vector<pii> edges; // use this to reconstruct the krt, with root = id

    void init(int _n){
        n = _n;
        id = n;
        e.resize(2 * n + 3, 0);
        p.resize(2 * n + 3, 0);
        iota(all(p), 0);
    }

    int find_set(int u){ return p[u] == u ? u : p[u] = find_set(p[u]); }

    void join_sets(int u, int v, int t){
        u = find_set(u), v = find_set(v);
        if(u == v)
            return;
        ++id;
        p[u] = p[v] = p[id] = id;
        e[id] = t;
        edges.push_back({u, id});
        edges.push_back({v, id});
    }
};