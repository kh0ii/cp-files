int timeDFS, timer, walk[2 * N], tin[N], tout[N], h[N], fi[N];

void pre_dfs(int u, int pre){
    tin[u] = ++timeDFS;
    walk[++timer] = u;
    fi[u] = timer;

    for(int v : g[u]){
        if(v == pre)
            continue;
        h[v] = h[u] + 1;
        pre_dfs(v, u);
        walk[++timer] = u;
    }
    tout[u] = timeDFS;
}

pii st[LG + 1][2 * N];

void build_st(){
    for(int i = 1; i <= timer; ++i)
        st[0][i] = {h[walk[i]], walk[i]};
    for(int k = 1; k <= LG; ++k)
        for(int i = 1; i + (1 << k) - 1 <= timer; ++i)
            st[k][i] = min(st[k - 1][i], st[k - 1][i + (1 << (k - 1))]);
}

int lca(int u, int v){
    if(fi[u] > fi[v])
        swap(u, v);
    int k = __lg(fi[v] - fi[u] + 1);
    //debug(st[k][fi[u]], st[k][fi[v] - (1 << k) + 1]);
    return min(st[k][fi[u]], st[k][fi[v] - (1 << k) + 1]).S;
}
