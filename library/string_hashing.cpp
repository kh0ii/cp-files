struct Hash{
    const ll base = 31;
    const ll MOD = 1e9 + 3;

    int n;
    string s;
    vector<ll> p, hash;

    void precalc(int _n){
        hash.resize(_n + 2, 0);
        p.resize(_n + 2, 0);
        p[0] = 1;
        for(int i = 1; i <= _n; ++i)
            p[i] = (p[i - 1] * base) % MOD;
    }

    void init(string x){
        n = x.size();

        precalc(n);

        s = ' ' + x;
        for(int i = 1; i <= n; ++i)
            hash[i] = (hash[i - 1] * base + (s[i] - 'a' + 1)) % MOD;
    }

    ll get_hash(int l, int r){
        return (hash[r] - hash[l - 1] * p[r - l + 1] + MOD * MOD) % MOD;
    }

    ll get_single_hash(string x){
        ll res = 0;
        for(int i = 0; i < sz(x); ++i)
            res = (res * base + (x[i] - 'a' + 1)) % MOD;
        return res;
    }
};