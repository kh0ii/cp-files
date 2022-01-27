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
#define int long long    // Int overflow
 
bool cmp(pair<string, int> a, pair<string, int> b){
    return a.S > b.S;
}
 
int32_t main() {
    setIO();  
    int n, t; cin>>n>>t;
    string nm; int d, j;
    vector<vector<pair<string, int>>> a(t+1);
    for(int i=0; i<n; i++){
        cin>>nm>>d>>j;
        a[d].pb({nm, j});
    }
    for(int i=1; i<=t; i++){
        sort(all(a[i]), cmp);
        if(sz(a[i])==2) cout<<a[i][0].F<<' '<<a[i][1].F<<'\n';
        else{
            if(a[i][1].S==a[i][2].S) {
                cout<<"?\n"; continue;
            }
            cout<<a[i][0].F<<' '<<a[i][1].F<<'\n';
        }
    }
    return 0;
}
 
 