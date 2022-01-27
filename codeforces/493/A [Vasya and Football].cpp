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
    string t1, t2; cin>>t1>>t2;
    int n, mn, num; cin>>n;
    vector<pair<pair<string, int>, int>> fl;
    map<pair<char, int>, pair<int, bool>> mp;
    char t, c;
    for(int i=0; i<n; i++){
        cin>>mn>>t>>num>>c;
        mp[{t, num}].F+=1 + (c=='r');
        if(mp[{t, num}].F >= 2 and !mp[{t, num}].S){
            fl.pb({{(t=='h' ? t1 : t2), num}, mn});
            mp[{t, num}].S = true;
        }
    }
    for(auto &k : fl){
        cout<<k.F.F<<' '<<k.F.S<<' '<<k.S<<'\n';
    }
    return 0;
}


