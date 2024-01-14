struct TwoSatSolver{
    int n;
    vector<int> comp, order;
    vector<bool> used;
    vector<vector<int>> g, g_rev;
    vector<bool> assignment;

    TwoSatSolver(int _n) :
        n(_n),
        comp(2 * n), used(2 * _n),
        g(2 * _n), g_rev(2 * _n),
        assignment(_n) {}

    // korasaju
    void dfs1(int u){
        used[u] = 1;
        for(int v : g[u])
            if(!used[v])
                dfs1(v);
        order.push_back(u);
    }

    void dfs2(int u, int cl){
        comp[u] = cl;
        for(int v : g_rev[u])
            if(comp[v] == -1)
                dfs2(v, cl);
    }

    bool solve(){
        fill(all(used), 0);
        for(int i = 0; i < 2 * n; ++i)
            if(!used[i])
                dfs1(i);

        fill(all(comp), -1);
        for(int i = 0, cur = 0; i < 2 * n; ++i){
            int v = order[2 * n - i - 1];
            if(comp[v] == -1)
                dfs2(v, cur++);
        }

        fill(all(assignment), 0);
        for(int i = 0; i < 2 * n; i += 2){
            if(comp[i] == comp[i + 1])
                return 0;
            assignment[i / 2] = comp[i] > comp[i + 1];
        }

        return 1;
    }

    void add_edge(int u, int v){
        g[u].push_back(v);
        g_rev[v].push_back(u);
    }

    void add_disjunction(int a, int na, int b, int nb){
        a = a * 2 ^ na;
        b = b * 2 ^ nb;
        int neg_a = a ^ 1;
        int neg_b = b ^ 1;
        add_edge(neg_a, b);
        add_edge(neg_b, a);
    }
};