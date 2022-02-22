#include "bits/stdc++.h"
using namespace std;

int n, m, ans[300005], l, r, x;
set<int> st;

void solve(){
    cin >> n >> m;
    for(int i = 1; i <= n; ++i)
        st.insert(i);
    for(int i = 1; i <= m; ++i){
        cin >> l >> r >> x;
        auto f = st.lower_bound(l);
        vector<int> e;
        while(f != st.end() and *f <= r){
            if(*f != x){
                ans[*f] = x;
                e.push_back(*f);
            }
            ++f;
        }
        for(int j : e)
            st.erase(j);
    }
    for(int i = 1; i <= n; ++i)
        cout << ans[i] << ' ';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int test = 1;
//    cin >> test;
    for(int i=1; i<=test; ++i){
        solve();
    }
    return 0;
}
// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

