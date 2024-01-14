struct Node{
    ll val;

    const Node operator + (const Node &other){
        Node res;
        res.val = val + other.val;
        return res;
    }
};

struct ST{
    int n;
    vector<Node> st;

    Node def = Node(); // default value

    void init(int _n){
        n = _n;
        st.resize(4 * n + 6, def);
    }

    void _update(int id, int l, int r, int pos, ll val){
        if(l == r){
            // update
            return;
        }

        int m = (l + r) / 2;
        if(l <= pos and pos <= m)
            _update(2 * id, l, m, pos, val);
        else
            _update(2 * id + 1, m + 1, r, pos, val);

        st[id] = st[2 * id] + st[2 * id + 1];
    }

    Node _query(int id, int l, int r, int tl, int tr){
        if(l > tr or tl > r)
            return def;
        if(tl <= l and r <= tr)
            return st[id];
        int m = (l + r) / 2;

        return _query(2 * id,  l, m, tl, tr) + _query(2 * id + 1, m + 1, r, tl, tr);
    }

    Node query(int l, int r){
        return _query(1, 1, n, l, r);
    }

    void update(int pos, ll val){
        _update(1, 1, n, pos, val);
    }
};