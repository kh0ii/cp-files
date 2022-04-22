#include "bits/stdc++.h"
using namespace std;

#define V vector
#define ll long long
#define pb emplace_back
#define F first
#define S second
#define sz(x) (int)(x.size())
#define all(x) (x).begin(), (x).end()

inline namespace FileIO {
    void setIn(string s)  { freopen(s.c_str(),"r",stdin); }
    void setOut(string s) { freopen(s.c_str(),"w",stdout); }
    void setIO(string s = "") {
        cin.tie(0)->sync_with_stdio(0);
        if (sz(s)) setIn(s+".inp"), setOut(s+".out");
    }
}
const int INF = 1e9+9;
const int MOD = 1e9+7; // 998244353;

map<char, int> mp;
string s, d;

void solve(){
    mp.clear();
    int ans = 0;
    cin>>d>>s;
    for(int i=0; i<sz(d); i++){
        mp[d[i]] = i+1;
    }
    for(int i=1; i<sz(s); i++) ans += abs(mp[s[i]] - mp[s[i-1]]);
    cout<<ans<<'\n';
}

int32_t main() {
    setIO();  
    int t; cin>>t;
    while(t--) solve();
    return 0;
}


