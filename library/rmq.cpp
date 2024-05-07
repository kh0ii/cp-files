struct RMQ_max{
    int n, lg;
    vector<int> a;
    vector<vector<int>>st;

    void init(int _n){
        n = _n;
        lg = __lg(n);
        a.resize(n + 2, 0);
        st.resize(lg + 1, vector<int>(n + 2, 0));
    }

    void build_st(){
        for(int i = 1; i <= n; ++i)
            st[0][i] = a[i];
        for(int k = 1; k <= lg; ++k)
            for(int i = 1; i + (1 << k) - 1 <= n; ++i)
                st[k][i] = max(st[k - 1][i], st[k - 1][i + (1 << (k - 1))]);
    }

    int get_max(int l, int r){
        int k = __lg(r - l + 1);
        return max(st[k][l], st[k][r - (1 << k) + 1]);
    }
};
