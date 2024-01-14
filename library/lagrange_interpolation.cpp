ll binpow(ll a, ll b){
    if(b == 0)
        return 1;
    ll res = binpow(a, b / 2);
    res = (res * res) % mod;
    if(b & 1)
        return (res * a) % mod;
    return res;
}

ll p[N], pre[N], suf[N], fact[N], invfact[N];

ll interpolate(ll n, ll k){
    for(int i = 1; i <= k + 2; ++i)
        p[i] = (p[i - 1] + binpow(i, k)) % mod;
    if(n <= k + 2)
        return p[n];
    pre[0] = suf[k + 3] = 1;
    for(int i = 1; i <= k + 2; ++i)
        pre[i] = (pre[i - 1] * 1ll * (n - i)) % mod;
    for(int i = k + 2; i >= 1; --i)
        suf[i] = (suf[i + 1] * 1ll * (n - i)) % mod;

    fact[0] = 1;
    for(int i = 1; i <= k + 2; ++i)
        fact[i] = (fact[i - 1] * 1ll * i) % mod;
    invfact[k + 2] = binpow(fact[k + 2], mod - 2);
    for(int i = k + 1; i >= 0; --i)
        invfact[i] = (invfact[i + 1] * 1ll * (i + 1)) % mod;

    ll res = 0;
    for(int i = 1; i <= k + 2; ++i){
        ll nume = (pre[i - 1] * suf[i + 1]) % mod;
        nume = (nume * p[i]) % mod;
        ll denom = (invfact[i - 1] * invfact[k + 2 - i]) % mod;

        if((k + 2 - i) & 1)
            res = (res - (nume * denom) % mod + mod) % mod;
        else
            res = (res + (nume * denom)) % mod;
    }

    return res;
}