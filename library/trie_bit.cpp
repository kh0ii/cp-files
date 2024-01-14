#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int)(x).size()

struct Trie{
    const static int LG = 29;
    struct Node{
        int child[2];
        Node(){
            memset(child, -1, sizeof(child));
        }
    };

    vector<Node> node;
    int cur = 0;

    Trie() : cur(0){
        node.push_back(Node());
    }

    int create_new_node(){
        node.push_back(Node()); ++cur;
        return cur;
    }

    void add(int x){
        int pos = 0;
        for(int i = LG; i >= 0; --i){
            int c = !!(x & (1 << i));
            if(node[pos].child[c] == -1)
                node[pos].child[c] = create_new_node();
            pos = node[pos].child[c];
            assert(pos != -1);
        }
        //cout << "add " << x << endl;
    }

    int max_xor(int x){
        int pos = 0, res = 0;
        for(int i = LG; i >= 0 and pos != -1; --i){
            int c = !!(x & (1 << i));
            if(node[pos].child[c ^ 1] != -1){
                pos = node[pos].child[c ^ 1];
                res |= (1 << i);
            }
            else
                pos = node[pos].child[c];
        }
        //cout << x << ' ' << res << endl;
        return res;
    }
};

const int N = 2e5 + 3;
const int LG = 18;

int n, a[N], lc[N], rc[N], lv[N], rv[N], p[N];
pair<int, int> st[LG + 1][N];

void build_st(){
    for(int i = 1; i <= n; ++i)
        st[0][i] = make_pair(a[i], i);
    for(int k = 1; k <= LG; ++k)
        for(int i = 1; i + (1 << k) - 1 <= n; ++i)
            st[k][i] = max(st[k - 1][i], st[k - 1][i + (1 << (k - 1))]);
}

int query(int l, int r){
    int k = __lg(r - l + 1);
    return max(st[k][l], st[k][r - (1 << k) + 1]).second;
}

int build_cartesian_tree(int l, int r){
    if(l > r)
        return 0;
    int x = query(l, r);
    lv[x] = l, rv[x] = r;
    lc[x] = build_cartesian_tree(l, x - 1);
    rc[x] = build_cartesian_tree(x + 1, r);
    return x;
}

vector<int> ele[N];
Trie trie[N];

int calc(int u){
    int res = 0;
    if(lc[u])
        res = max(res, calc(lc[u]));
    if(rc[u])
        res = max(res, calc(rc[u]));
    if(lc[u] and rc[u]){
        if(sz(ele[rc[u]]) > sz(ele[lc[u]])){
            res = max(res, trie[rc[u]].max_xor(p[lv[u] - 1] ^ a[u]));
            for(int x : ele[lc[u]]){
                res = max(res, trie[rc[u]].max_xor(p[x] ^ a[u]));
                res = max(res, p[u] ^ p[x] ^ a[u]);
            }
            ele[u] = ele[rc[u]];
            trie[u] = trie[rc[u]];
            for(int x : ele[lc[u]]){
                ele[u].push_back(x);
                trie[u].add(p[x]);
            }
        }
        else{
            res = max(res, trie[lc[u]].max_xor(p[u] ^ a[u]));
            res = max(res, p[u] ^ p[lv[u] - 1] ^ a[u]);
            for(int x : ele[rc[u]]){
                res = max(res, trie[lc[u]].max_xor(p[x] ^ a[u]));
                res = max(res, p[x] ^ a[u] ^ p[lv[u] - 1]);
            }
            ele[u] = ele[lc[u]];
            for(int x : ele[rc[u]]){
                ele[u].push_back(x);
                trie[u].add(p[x]);
            }
        }
    }
    else if(lc[u]){
        res = max(res, trie[lc[u]].max_xor(p[u] ^ a[u]));
        res = max(res, p[u] ^ a[u] ^ p[lv[u] - 1]);
        trie[u] = trie[lc[u]];
        ele[u] = ele[lc[u]];
    }
    else{
        res = max(res, trie[rc[u]].max_xor(p[lv[u] - 1] ^ a[u]));
        trie[u] = trie[rc[u]];
        ele[u] = ele[rc[u]];
    }
    ele[u].push_back(u);
    trie[u].add(p[u]);
    return res;

}

void reset_data(){
    for(int i = 1; i <= n; ++i){
        ele[i].clear();
        trie[i] = Trie();
    }
}

void solve(){
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        p[i] = p[i - 1] ^ a[i];
    }
    build_st();
    int root = build_cartesian_tree(1, n);

    cout << calc(root) << '\n';
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(0);

    int ttest;
    cin >> ttest;
    while(ttest--)
        solve();

    return 0;
}
