struct implicit_ST{
    using type = ll;
    struct Node{
        int lv, rv;
        type val, lazy;
        Node *l, *r;
        Node(type _lv, type _rv) : lv(_lv), rv(_rv), val(0), lazy(0), l(NULL), r(NULL) {}
    };

    Node *root;
    type n;

    void init(type _n){
        n = _n;
        root = new Node(1, n);
    }

    void create_new_node(Node *x, type l, type r){
        type m = (l + r) / 2;
        if(x->l == NULL){
            x->l = new Node(l, m);
        }
        if(x->r == NULL)
            x->r = new Node(m + 1, r);
    }

    void down(Node *cur){
        type x = cur->lazy;

        cur->l->val += (cur->l->rv - cur->l->lv + 1) * x;
        cur->l->lazy += x;

        cur->r->val += (cur->r->rv - cur->r->lv + 1) * x;
        cur->r->lazy += x;

        cur->lazy = 0;
    }

    void _update(Node *cur, type l, type r, type tl, type tr, type x){
        if(l > tr or tl > r) return;
        if(tl <= l and r <= tr){
            debug(l, r, x, cur->val);
            cur->val += (r - l + 1) * x;
            cur->lazy += x; 
            return;
        }

        create_new_node(cur, l, r);
        down(cur);

        type m = (l + r) / 2;

        _update(cur->l, l, m, tl, tr, x);
        _update(cur->r, m + 1, r, tl, tr, x);

        cur->val = cur->l->val + cur->r->val;
    }

    type _query(Node *cur, type l, type r, type tl, type tr){
        if(l > tr or tl > r)
            return 0;
        if(tl <= l and r <= tr)
            return cur->val;

        create_new_node(cur, l, r);
        down(cur);

        type m = (l + r) / 2;

        return _query(cur->l, l, m, tl, tr) + _query(cur->r, m + 1, r, tl, tr);
    }

    void update(type l, type r, type val){
        _update(root, 1, n, l, r, val);
    }

    type query(type l, type r){
        return _query(root, 1, n, l, r);
    }
};