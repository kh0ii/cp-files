#include "bits/stdc++.h"
using namespace std;

using ll = long long;
const int MOD = 1e9+7; // 998244353;

#define mp make_pair
#define pb push_back
#define F first
#define S second

#define sz(x) (int)(x.size())
#define all(x) (x).begin(), (x).end()

void debug_out() { cerr << endl; }
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
    cerr<<" "<<H; debug_out(T...);
}
#ifdef LOCAL
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) 42
#endif

inline namespace FileIO {
    void setIn(string s)  { freopen(s.c_str(),"r",stdin); }
    void setOut(string s) { freopen(s.c_str(),"w",stdout); }
    void setIO(string s = "") {
        cin.tie(0)->sync_with_stdio(0);
        // cin.exceptions(cin.failbit);
        if (sz(s)) setIn(s+".inp"), setOut(s+".out");
    }
}

int a[200005];

int32_t main() {
    setIO();  
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        for(int i=0; i<n; i++) cin>>a[i];
        if(n==1) {
            cout<<0<<'\n';
            continue;
        }
        else if(n==2){
            cout<<1<<'\n';
            continue;
        }
        sort(a, a+n);
        int cnt=1, diff=1, ans=0;
        for(int i=1; i<n; i++){
            if(a[i]==a[i-1]) cnt++;
            else {
                ans = max(ans, cnt);
                cnt = 1;
                diff++;
            }
        }
        // last check
        ans = max(ans, cnt);
        cout<<max(min(ans-1, diff), min(ans, diff-1))<<'\n';
    }
    return 0;
    // you should actually read the stuff at the bottom
}

/** stuff you should look for
    * int overflow, array bounds, too much recursive calls
    * special cases (n=1?)
    * do smth instead of nothing and stay organized
    * try to stress test if not sure
    * WRITE STUFF DOWN
    * DON'T GET STUCK ON ONE APPROACH
**/

