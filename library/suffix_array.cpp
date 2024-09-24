void radix_sort(vector<pair<pii, int>> &a){
    for(int it = 0; it <= 1; ++it){ // sort by second element first, then sort first element
        int mx = 0;
        for(int i = 0; i < sz(a); ++i)
            mx = max(mx, (it ? a[i].F.F : a[i].F.S));

        vector<int> occ(mx + 1), st(mx + 1);
        for(int i = 0; i < sz(a); ++i)
            ++occ[(it ? a[i].F.F : a[i].F.S)];
        for(int i = 1; i <= mx; ++i)
            st[i] = st[i - 1] + occ[i - 1];

        vector<pair<pii, int>> nx_a(sz(a));
        for(int i = 0; i < sz(a); ++i){
            int key = (it ? a[i].F.F : a[i].F.S);
            nx_a[st[key]] = a[i];
            ++st[key];
        }
        a = nx_a;
    }
}

vector<int> suffix_array(string s){
    s = s + '$';

    int n = sz(s);

    vector<pair<pii, int>> suf(n);
    vector<int> equiv(n);

    for(int i = 0; i < n; ++i)
        suf[i] = {{s[i], s[i]}, i};
    sort(all(suf));

    for(int i = 1; i < n; ++i)
        equiv[suf[i].S] = equiv[suf[i - 1].S] + (suf[i].F > suf[i - 1].F);
    
    for(int len = 1; len < n; len <<= 1){
        for(int i = 0; i < n; ++i)
            suf[i].F = {equiv[suf[i].S], equiv[(suf[i].S + len) % n]};
        radix_sort(suf);
        for(int i = 1; i < n; ++i)
            equiv[suf[i].S] = equiv[suf[i - 1].S] + (suf[i].F > suf[i - 1].F);
    }

    vector<int> sa;

    for(int i = 1; i < n; ++i)
        sa.push_back(suf[i].S);

    return sa;
}