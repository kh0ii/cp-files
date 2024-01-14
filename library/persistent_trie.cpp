const int LG = 30;

struct PersistentTrie{
    struct Node{
        Node *child[2];
        int cnt;

        Node(){ child[0] = child[1] = NULL, cnt = 0; }
        Node(int x) { child[0] = child[1] = NULL, cnt = x; }
        Node(Node *lv, Node *rv){
            cnt = 0;
            child[0] = lv, child[1] = rv;
            if(lv != NULL)
                cnt += lv->cnt;
            if(rv != NULL)
                cnt += rv->cnt;
        }
    };

    vector<Node*> roots;

    void init(){
        roots.push_back(new Node());
    }

    Node *add(Node *p, int x, int i){
        //debug(x, i);
        if(i < 0){
            if(p == NULL)
                return new Node(1);
            return new Node(p->cnt + 1);
        }
        if(p->child[0] == NULL)
            p->child[0] = new Node();
        if(p->child[1] == NULL)
            p->child[1] = new Node();

        if(x & (1 << i))
            return new Node(p->child[0], add(p->child[1], x, i - 1));
        return new Node(add(p->child[0], x, i - 1), p->child[1]);
    }

    ll get_max_xor(Node *p, int x, int i){
        if(i < 0)
            return 0;

        int c = !!(x & (1 << i));

        if(p->child[c ^ 1] != NULL and p->child[c ^ 1]->cnt)
            return get_max_xor(p->child[c ^ 1], x, i - 1) | (1 << i);
        else
            return get_max_xor(p->child[c], x, i - 1);
    }

    ll get_max_xor(int ver, int x){
        ll res =  get_max_xor(roots[ver], x, LG);
        debug(res);
        return res;
    }

    ll get_min_xor(Node *p, int x, int i){
        if(i < 0)
            return 0;
        int c = !!(x & (1 << i));

        //debug(x, i, c, p->child[0]->cnt, p->child[1]->cnt);

        if(p->child[c] != NULL and p->child[c]->cnt)
            return get_min_xor(p->child[c], x, i - 1);
        else
            return get_min_xor(p->child[c ^ 1], x, i - 1) | (1 << i);
    }

    ll get_min_xor(int ver, int x){
        debug(ver, x);
        ll res = get_min_xor(roots[ver], x, LG);
        debug(res);
        return res;
    }

    void add(int ver, int x){
        debug(ver, x);
        //debug(ver, x, sz(roots));
        roots[ver] = add(roots[ver], x, LG);
    }

    void add_ver(int ver){
        roots.push_back(roots[ver]);
    }
};