struct Fenwick{
    #define gb(x) (x) & -(x)
    vector<ll> bit;
    int n;

    void init(int _n){
        bit.resize(_n + 4, 0);
        n = _n;
    }

    void upd(int x, ll val){
        while(x <= n){
            bit[x] += val;
            x += gb(x);
        }
    }

    ll get(int x){
        ll res = 0;
        while(x > 0){
            res += bit[x];
            x -= gb(x);
        }
        return res;
    }

    ll get_range(int l, int r){
        if(l > r)
            return 0;
        return get(r) - get(l - 1);
    }
};