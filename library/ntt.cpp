/* NTT with modulo 998244353
notes:
NTT with mod m
g is any primitive root modulo m (g = 3 works well for 998244353)
n divides m - 1 evenly
wn = g^((m - 1) / n)
https://codeforces.com/blog/entry/75326
*/

const int N = 1 << 21;
const ll mod = 998244353;
const ll g = 3;

int rev[N];
ll w[N], iw[N], wt[N], inv_n;

ll binpow(ll a, ll b){
    ll res = 1;
    for(; b; b >>= 1, a = (1ll * a * a) % mod)
        if(b & 1)
            res = (1ll * res * a) % mod;
    return res;
}

void precalc(int lg){
    int n = 1 << lg;

    inv_n = binpow(n, mod - 2);

    for(int i = 0; i < n; ++i){
        rev[i] = 0;
        for(int j = 0; j < lg; ++j)
            if(i & (1 << j))
                rev[i] |= (1 << (lg - j - 1));
    }

    ll wn = binpow(g, (mod - 1) / n);
    w[0] = 1;
    for(int i = 1; i < n; ++i)
        w[i] = (1ll * w[i - 1] * wn) % mod;

    ll iwn = binpow(wn, mod - 2);
    iw[0] = 1;
    for(int i = 1; i < n; ++i)
        iw[i] = (1ll * iw[i - 1] * iwn) % mod;
}

void ntt(vector<ll> &a, int lg, bool inv = 0){
    int n = (1 << lg);

    for(int i = 0; i < n; ++i)
        if(i < rev[i])
            swap(a[i], a[rev[i]]);

    for(int len = 2; len <= n; len <<= 1){
        int d = n / len;
        for(int j = 0; j < (len >> 1); ++j)
            wt[j] = (inv ? iw[d * j] : w[d * j]);
        for(int i = 0; i < n; i += len){
            for(int j = 0; j < (len >> 1); ++j){
                ll x = a[i + j], y = (1ll * a[i + j + (len >> 1)] * wt[j]) % mod;
                a[i + j] = (x + y) % mod;
                a[i + j + (len >> 1)] = (x - y + mod) % mod;
            }
        }
    }

    if(inv)
        for(int i = 0; i < n; ++i)
            a[i] = (1ll * a[i] * inv_n) % mod;
}

vector<ll> multiply(vector<ll> a, vector<ll> b){
    int n = 1, lg = 0;
    int na = sz(a), nb = sz(b);

    while(n < na + nb)
        n <<= 1, ++lg;

    precalc(lg);

    a.resize(n);
    b.resize(n);

    ntt(a, lg);
    ntt(b, lg);

    for(int i = 0; i < n; ++i)
        a[i] = (1ll * a[i] * b[i]) % mod;

    ntt(a, lg, 1);

    vector<ll> c;
    for(int i = 0; i < na + nb - 1; ++i)
        c.push_back(a[i]);

    // while(!c.empty() and c.back() == 0)
    //     c.pop_back();

    return c;
}