int head[N], pos[N], p[N], h[N], cur_pos, sz[N];

void dfs_sz(int u, int pre = -1){
    sz[u] = 1;
    for(int v : g[u]){
        if(v == pre)
            continue;
        h[v] = h[u] + 1;
        p[v] = u;
        dfs_sz(v, u);
        sz[u] += sz[v];
    }
}

void hld(int u, int cur_head, int pre = -1){
    head[u] = cur_head;
    pos[u] = ++cur_pos;
    int nxt = -1;

    for(int v : g[u])
        if(v != pre and (nxt == -1 or sz[nxt] < sz[v]))
            nxt = v;

    if(nxt != -1)
        hld(nxt, cur_head, u);

    for(int v : g[u])
        if(v != pre and v != nxt)
            hld(v, v, u);
}

int query(int u, int v){ // get some value in path from u to v
    for(; head[u] != head[v]; v = p[head[v]]){
        if(h[head[u]] > h[head[v]])
            swap(u, v);
        // do something
    }
    if(h[u] > h[v])
        swap(u, v);
    // do something
    return res;
}