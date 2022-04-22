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

int32_t main() {
    setIO();  
    ll t, k, n;
    cin>>t;
    while(t--){
        cin>>n>>k;
        n--;
        ll ans = 0, d = 1;
        bool flag = true;
        while(n>0){
            if(d==k){
                ans += n/d + min(1ll, n%d);
                flag = false;
                n = 0;
            }
            else n -= d;
            if(d < k){
                d*=2;
                if(d>k) d = k;
            }
            if(flag) ans++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}


