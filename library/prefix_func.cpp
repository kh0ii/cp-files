vector<int> prefix_func(string &x){
    vector<int> pi(sz(x), 0);
    for(int i = 1; i < sz(x); ++i){
        int j = pi[i - 1];
        while(j > 0 and x[i] != x[j])
            j = pi[j - 1];
        if(x[j] == x[i])
            ++j;
        pi[i] = j;
    }
    return pi;
}