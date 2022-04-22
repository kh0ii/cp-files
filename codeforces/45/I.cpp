#include "bits/stdc++.h"
using namespace std;

#define ll long long

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

const int MOD = 1e9+7; // 998244353;

int nxt(){
    int x; cin >> x; return x;
}

int32_t main() {
    setIO();  
    int n = nxt(), cnt=0;
    vector<int> pos, neg, zero;
    if(n==1){
        int j = nxt();
        cout<<j;
        return 0;
    }
    for(int i=0; i<n; i++){
        int j = nxt();
        if(j>0) pos.pb(j);
        else if(j<0){
            neg.pb(j); cnt++;
        }
        else zero.pb(j);
    }
    if(sz(pos)==0){
        if(sz(neg)<=1){
            for(auto &k : zero) cout<<k<<' ';
            return 0;
        }
    }
    sort(pos.rbegin(), pos.rend());
    sort(all(neg));
    for(auto &k : pos) cout<<k<<' ';
    for(int i=0; i<sz(neg)-(cnt%2==0 ? 0 : 1); i++){
        cout<<neg[i]<<' ';
    }
    return 0;
}

