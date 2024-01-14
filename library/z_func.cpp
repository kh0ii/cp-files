vector<int> z_func(string &s){ // 0 - based
    vector<int> z(sz(s));
    for(int i = 1, l = 0, r = 0; i < sz(s); ++i){
        if(i <= r)
            z[i] = min(r - i + 1, z[i - l]);
        while(i + z[i] < sz(s) and s[z[i]] == s[i + z[i]])
            ++z[i];
        if(i + z[i] - 1 > r){
            l = i;
            r = i + z[i] - 1;
        }
    }
    return z;
}