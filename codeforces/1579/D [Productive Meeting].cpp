#include "bits/stdc++.h"
using namespace std;

int n;
pair<int, int> a[200005];

void solve(){
    set<pair<int, int>> st;
    vector<pair<int, int>> ans;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i].first;
        a[i].second = i;
        if(a[i].first > 0)
            st.insert(a[i]);
    }
    while(st.size() > 1){
        auto it = st.end();
        --it;
        auto f = *it;
        st.erase(it);
        it = st.end();
        --it;
        auto s = *it;
        st.erase(*it);
        --s.first;
        --f.first;
        ans.push_back(make_pair(f.second, s.second));
        if(f.first > 0)
            st.insert(f);
        if(s.first > 0)
            st.insert(s);
    }
    cout << ans.size() << '\n';
    for(auto k : ans)
        cout << k.first << ' ' << k.second << '\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int test = 1;
    cin >> test;
    for(int i=1; i<=test; ++i){
        solve();
    }
    return 0;
}
// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

