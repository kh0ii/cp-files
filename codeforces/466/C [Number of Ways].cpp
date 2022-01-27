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
#define int long long
inline namespace FileIO {
    void setIn(string s)  { freopen(s.c_str(),"r",stdin); }
    void setOut(string s) { freopen(s.c_str(),"w",stdout); }
    void setIO(string s = "") {
        cin.tie(0)->sync_with_stdio(0);
        if (sz(s)) setIn(s+".inp"), setOut(s+".out");
    }
}
const int MOD = 1e9+7; // 998244353;
const int INF = 1000000009;

int32_t main() {
    setIO();  
    int n; cin>>n;
    int a[n], pref[n+1]; pref[0] = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        pref[i+1] = pref[i] + a[i];
    }
    //for(int i=1; i<=n; i++) cout<<pref[i]<<' ';
    int cnt = 0, ans = 0;
    if(pref[n]%3){
        cout<<0;
        return 0;
    }
    int k = pref[n]/3;
    for(int i=1; i<=n-1; i++){
        if(pref[i]==2*k) ans += cnt;
        if(pref[i]==k) cnt++;
    }
    cout<<ans;
    return 0;
}
