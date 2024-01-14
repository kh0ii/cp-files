struct Matrix{
    vector<vector<ll>> mat;
    int n, m;
    Matrix(int _n, int _m){
        n = _n; m = _m;
        mat.resize(n, vector<ll>(m, 0));
    }
    Matrix identity(int _n){
        Matrix a = Matrix(_n, _n);
        while(_n--) a.mat[_n][_n] = 1;
        return a;
    }
    Matrix operator * (const Matrix &b){
        Matrix a = *this;
        assert(a.m == b.n);
        Matrix res(a.n, b.m);
        for(int i = 0; i < a.n; ++i){
            for(int j = 0; j < b.m; ++j){
                for(int k = 0; k < a.m; ++k){
                    res.mat[i][j] += (a.mat[i][k] * b.mat[k][j]) % mod;
                    res.mat[i][j] %= mod;
                }
            }
        }
        return res;
    }
    Matrix pow(ll exp){
        assert(n == m);
        Matrix base = *this, ans = identity(n);
        for(; exp > 0; exp >>= 1ll, base = base * base){
            if(exp & 1) ans = ans * base;
        }
        return ans;
    }
};

ll fib(ll d){
    Matrix a(2, 2);
    a.mat = {{1, 1}, {1, 0}};
    a = a.pow(d - 1);
    return a.mat[0][0];
}