/**
 *	author: kh0i
 *	created: 11.04.2022 18:10:45
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

struct Seg{
    int l, r;
};

bool cmp (const Seg &f, const Seg &s){
    if(f.r - f.l + 1 != s.r - s.l + 1){
        return f.r - f.l + 1 > s.r - s.l + 1;
    }
    return f.l < s.l;
}

void solve(){
    int n, i = 1;
    cin >> n;
    vector<int> ans(n + 1, 0);
    set<Seg, bool(*)(const Seg&, const Seg&)> st(cmp);
    st.insert({1, n});
    while(!st.empty()){
       auto f = *st.begin();
       st.erase(st.begin());
       int pos = (f.r + f.l) / 2;
       ans[pos] = i++;
//       debug(st.size(), pos);
       if(f.r - f.l + 1 <= 1) continue;
       if(f.l < pos)
           st.insert({f.l, pos - 1});
       if(f.r > pos){
           st.insert({pos + 1, f.r});
       }
    }
    for(int i = 1; i <= n; ++i){
        cout << ans[i] << ' ';
    }
    cout << "\n";
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    int test = 1;
    cin >> test;
    for(int i = 1; i <= test; ++i){
        solve();
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}


