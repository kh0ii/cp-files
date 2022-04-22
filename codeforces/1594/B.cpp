/**
 *    author: kh0i
 *    created: 08.10.2021 22:03:26
**/
#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
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
        if (sz(s)) setIn(s+".inp"), setOut(s+".out");
    }
}
const int MOD = 1e9+7; // 998244353;
const int INF = 1000000009;

long long binpow(long long a, long long b) {
    a = a%MOD;
    long long res = 1;
    while(b>0) {
        if(b&1)
            res = res*a%MOD;
        a = a*a%MOD;
        b/=2;
    }
    return res%MOD;
}

int32_t main() {
    setIO();  
    int t; cin>>t;
    ll n, k;
    while(t--){
        cin>>k>>n;
        ll ans = 0;
        for(int i=0; n>0; i++){
            if(n%2){
                n--;
                ans += binpow(k, i);
                ans%=MOD;
            }
            n/=2;
        }
        cout<<ans%MOD<<'\n';
    }
    return 0;
}
