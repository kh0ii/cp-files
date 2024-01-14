struct Basis {
    const int LG = 61;

    vector<ll> ids;
    vector<ll> a;
 
    Basis() : a(LG, -1) {}
 
    void add(int id, ll x) {
        for (ll i = 0; i < LG; i++) {
            if (x & (1ll << i)) {
                if (a[i] == -1) {
                    a[i] = x;
                    ids.push_back(id);
                    break;
                } else {
                    x ^= a[i];
                }
            }
        }
    }
 
    bool is_spannable(ll x) {
        for (ll i = 0; i < LG; i++) {
            if ((x & (1 << i)) && a[i] != -1) {
                x ^= a[i];
            }
        }
        return (x == 0);
    }
};