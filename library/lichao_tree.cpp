const int N = 1e5 + 3;
const ll inf = 1e16;

struct Line{
    ll k, m;
    Line() : k(0), m(-inf) {}
    Line(ll k, ll m) : k(k), m(m) {}
    ll operator ()(ll x){ return k * x + m; }
};

struct Node{
    int lv, rv;
    Line opt;
};

struct LiChaoTree{
    Node st[4 * N];
    void init_tree(int id, int l, int r, vector<int> &pts){
        if(l == r){
            st[id].lv = st[id].rv = pts[l];
            return;
        }
        int mid = (l + r) >> 1;
        init_tree(id << 1, l, mid, pts);
        init_tree(id << 1 | 1, mid + 1, r, pts);

        st[id].lv = st[id << 1].lv;
        st[id].rv = st[id << 1 | 1].rv;
    }

    void add_line(int id, Line line){
        if(st[id].lv == st[id].rv){
            if(st[id].opt(st[id].lv) < line(st[id].lv))
                st[id].opt = line;
            return;
        }
        int mid = st[id << 1].rv;

        if(st[id].opt.k > line.k)
            swap(st[id].opt, line);
        if(st[id].opt(mid) < line(mid)){
            swap(st[id].opt, line);
            add_line(id << 1, line);
        }
        else
            add_line(id << 1 | 1, line);
    }


    void add_seg(int id, int tl, int tr, Line line){
        int l = st[id].lv, r = st[id].rv;
        if(l > tr or tl > r)
            return;
        if(tl <= l and r <= tr){
            add_line(id, line);
            return;
        }
        add_seg(id << 1, tl, tr, line);
        add_seg(id << 1 | 1, tl, tr, line);
    }

    ll query(int id, int pos){   
        if(st[id].lv == st[id].rv)
            return st[id].opt(pos);
        if(pos <= st[id << 1].rv)
            return max(st[id].opt(pos), query(id << 1, pos));
        return max(st[id].opt(pos), query(id << 1 | 1, pos));
    }
};