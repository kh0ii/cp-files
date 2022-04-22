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



struct Dom{
    int base[2][2];
    void IN(){
        string s;
        for(int i=0; i<2; i++) {
            cin>>s;
            base[i][0] = int(s[0]) - 48; base[i][1] = int(s[1]) - 48;
        }
    }
};

struct Piles{
    Dom base, pat_1, pat_2, pat_3;
};
bool cmp(Dom a, Dom b){
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            if(a.base[i][j] != b.base[i][j]) return false;
        }
    }
    return true;
}

Dom rot(Dom a){
    Dom ret;
    ret.base[0][0] = a.base[1][0];
    ret.base[0][1] = a.base[0][0];
    ret.base[1][1] = a.base[0][1];
    ret.base[1][0] = a.base[1][1];
    return ret;
}

int32_t main() {
    setIO();  
    int n; cin>>n;
    assert(n>0);
    Dom dom[n];
    vector<Piles> piles;
    string tmp;
    dom[0].IN();
    char temp;
    for(int i=1; i<n; i++){
        cin>>temp>>temp;
        dom[i].IN();
    }
    bool flag;
    for(int i=0; i<n; i++){
        flag = false;
        for(auto &k : piles){
            if(cmp(dom[i], k.base)) { flag = true; break; }
            if(cmp(dom[i], k.pat_1)) { flag = true; break; }
            if(cmp(dom[i], k.pat_2)) { flag = true; break; }
            if(cmp(dom[i], k.pat_3)) { flag = true; break; }
        }
        if(!flag){
            Piles a;
            a.base = dom[i];
            a.pat_1 = rot(dom[i]);
            a.pat_2 =  rot(a.pat_1);
            a.pat_3 = rot(a.pat_2);
            piles.pb(a);
        }
    }
    cout<<sz(piles);
    return 0;
}
