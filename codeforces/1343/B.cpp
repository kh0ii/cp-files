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
const int MOD = 1e9+7; // 998244353;
const int INF = 1000000009;

int32_t main() {
    setIO();  
    int t; cin>>t;
    int n;
    while(t--){
        cin>>n;
        if((n/2)%2) {
            cout<<"NO\n";
            continue;
        }
        int cnt1 = 0, cnt2=0;
        cout<<"YES\n";
        for(int i=1; i<=n/2; i++){
            cout<<i*2<<' '; cnt1+=i*2;
        }
        for(int i=1; i<=n-3; i+=2){
            cout<<i<<' '; cnt2+=i;
        }
        cout<<cnt1-cnt2<<'\n';
    }
    return 0;
}
