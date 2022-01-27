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
    int a = nxt(), b = nxt(), newa(0), newb(0), newc(0); 
    int cnt=1, c = a+b;
    while(a>0){
        if(a%10!=0){
            newa += (a%10)*cnt; cnt*=10;
        }
        a/=10;
    }
    cnt = 1;
    while(b>0){
        if(b%10!=0){
            newb += (b%10) * cnt; cnt *= 10;
        }
        b/=10;
    }
    cnt = 1;
    while(c>0){
        if(c%10!=0){
            newc += (c%10) * cnt; cnt*=10;
        }
        c/=10;
    }
    cout<<(newa + newb == newc ? "YES" : "NO");
    return 0;
}

