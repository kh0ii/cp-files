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
    int t = nxt();
    int a[200005];
    while(t--){
        int n = nxt(), h = nxt();
        for(int i=0; i<n; i++) a[i] = nxt();
        sort(a, a+n, greater<int>());
        int step = 2 * floor(h/(a[0]+a[1]));
        if(h%(a[0] + a[1]) <= a[0] and h%(a[0] + a[1])) step++;
        else if(h % (a[0] + a[1]) > a[0]) step+=2;
        cout<<step<<'\n';
    }
    return 0;
}

