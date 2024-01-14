#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;

constexpr bool typetest = 0;
constexpr int N = 1e5 + 5;
int n, m, q;
vector<pair<int, int>> adj[N];
int low[N], num[N], l = 0;
int com[N];
bool isBridge[N];

vector<int> nadj[N];
int par[N][17];
int ranks[N];
int in[N], out[N];

void Read()
{
    cin >> n >> m >> q;

    for(int i = 1; i <= m; ++i)
    {
        int u,v;
        cin >> u >> v;
        adj[u].emplace_back(v, i);
        adj[v].emplace_back(u, i);
    }
}

void dfs(int v, int p)
{
    low[v] = num[v] = ++l;
    for(auto i : adj[v])
        if(i.second != p) 
        {
            if(num[i.first])
            {
                low[v] = min(low[v], num[i.first]);
            }
            else 
            {
                dfs(i.first, i.second);
                low[v] = min(low[v], low[i.first]);

                // Bridge
                if(low[i.first] > num[v])
                {
                    isBridge[i.second] = true;
                }
            }
        }
}

void dfs_com(int v)
{
    com[v] = l;
    for(auto i : adj[v])
        if(!com[i.first] && !isBridge[i.second]) {
            dfs_com(i.first);
        }
}

void _dfs(int v)
{
    in[v] = ++l;

    for(int i = 1; i < 17; ++i)
        par[v][i] = par[par[v][i - 1]][i - 1];

    for(auto i : nadj[v])
        if(!ranks[i])
        {
            ranks[i] = ranks[v] + 1;
            par[i][0] = v;
            _dfs(i);
        }
    
    out[v] = l;
}

int LCA(int u, int v) {
    if(ranks[u] < ranks[v])
        swap(u, v);
    
    for(int i = 16; ~i; --i)
        if(ranks[par[u][i]] >= ranks[v])
            u = par[u][i];
    
    for(int i = 16; ~i; --i)
        if(par[u][i] != par[v][i])
        {
            u = par[u][i];
            v = par[v][i];
        }
    
    return u == v ? u : par[u][0];
}

int In(int x, int y) {
    return in[x] <= in[y] && in[y] <= out[x];
}

int Get(int x, int y, int z, int t) {
    if(!In(x, z) && !In(z, x))
        return 0;
    
    for(int i = 16; ~i; --i)
        if(par[t][i] != 0 && !In(par[t][i], y))
            t = par[t][i];
    
    if(!In(t, y)) t = par[t][0];
    // cout << x << " " << y << " " << z << " " << t << "\n";

    return max(0, ranks[t] - max(ranks[x], ranks[z]));
}

void Solve()
{
    dfs(1, -1);

    l = 0;
    for(int i = 1; i <= n; ++i)
        if(!com[i])
        {
            ++l;
            dfs_com(i);
        }
    
    for(int i = 1; i <= n; ++i)
        for(auto j : adj[i])
            if(com[i] < com[j.first])
            {
                nadj[com[i]].emplace_back(com[j.first]);
                nadj[com[j.first]].emplace_back(com[i]);
            }
    
    ranks[1] = 1;
    l = 0;
    _dfs(1);

    while(q--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        a = com[a];
        b = com[b];
        c = com[c];
        d = com[d];

        int lcaAB = LCA(a, b);
        int lcaCD = LCA(c, d);

        int ans = ranks[c] + ranks[d] - 2 * ranks[lcaCD];
        // cerr << ans << " ";
        ans -= Get(lcaAB, a, lcaCD, c);
        ans -= Get(lcaAB, a, lcaCD, d);
        ans -= Get(lcaAB, b, lcaCD, c);
        ans -= Get(lcaAB, b, lcaCD, d);

        cout << ans << "\n";
    }
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    if (fopen("tests.inp", "r"))
    {
        freopen("test.inp", "r", stdin);
        freopen("test.out", "w", stdout);
    }

    int t(1);
    if (typetest)
        cin >> t;

    for (int _ = 1; _ <= t; ++_)
    {
        // cout << "Case #" << _ << endl;
        Read();
        Solve();
    }
    // cerr << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
}

/*
Input:
1
abcahsdfaw
1
q i

Output:
9
*/
