#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
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
        if (sz(s)) setIn(s+".inp"), setOut(s+".out");
    }
}
const int INF = 1e9+9;
const int MOD = 1e9+7; // 998244353;
//#define int long long    // Int overflow

int32_t main() {
    setIO();  
    int t; cin>>t;
    string s;
    while(t--){
        cin>>s;
        s = 'R' + s + 'R';
        vi ln;
        for(int i=0; i<sz(s); i++){
            if(s[i]=='R') ln.pb(i);
        }
        int ans = ln[1] - ln[1];
        for(int i=1; i<sz(ln); i++) ans = max(ans, ln[i] - ln[i-1]);
        cout<<ans<<'\n';
    }
    return 0;
}
