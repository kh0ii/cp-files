struct PersistentST{
    struct Node{
        ll val;
        Node *l, *r;

        Node() : val(0), l(NULL), r(NULL) {};
        Node(ll x) : val(x), l(NULL), r(NULL) {};
        Node(Node *lv, Node *rv){
            val = 0;
            l = lv, r = rv;
            if(lv != NULL)
                val += lv->val;
            if(rv != NULL)
                val += rv->val;
        }
        Node(Node *o) : val(o->val), l(o->l), r(o->r) {};
    };

    int n;
    vector<Node*> roots;

    void init(int _n){
        n = _n;
        roots.push_back(empty_tree(1, n));
    }

    Node* empty_tree(int l, int r){
        if(l == r)
            return new Node();
        int mid = (l + r) / 2;
        return new Node(empty_tree(l, mid), empty_tree(mid + 1, r));
    }

    Node *_update(Node *node, int l, int r, int pos, ll val){
        if(l == r){
            if(node == NULL)
                return new Node(val);
            return new Node(node->val + val);
        }
        int mid = (l + r) / 2;
        if(pos <= mid)
            return new Node(_update(node->l, l, mid, pos, val), node->r);
        return new Node(node->l, _update(node->r, mid + 1, r, pos, val));
    }

    ll _query(Node *node, int l, int r, int tl, int tr){
        if(l > tr or tl > r)
            return 0;
        if(tl <= l and r <= tr)
            return node->val;
        int mid = (l + r) / 2;
        return _query(node->l, l, mid, tl, tr) + _query(node->r, mid + 1, r, tl, tr);
    }

    ll query(int ver, int l, int r){
        return _query(roots[ver], 1, n, l, r);
    }

    void update(int ver, int pos, ll val){
        roots[ver] = _update(roots[ver], 1, n, pos, val);
    }

    void add(int ver){
        roots.push_back(roots[ver]);
    }

    void clear(){
        while(!roots.empty()){
            delete(roots.back());
            roots.pop_back();
        }
    }
};