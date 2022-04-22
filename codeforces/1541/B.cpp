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
    pair<int, int> a[100005];
    while(t--){
        int n; cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i].F; a[i].S = i+1;
        }
        int cnt=0; sort(a, a+n);
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(a[i].F*1ll*a[j].F>2*n) break;
                cnt += (a[i].F*1ll*a[j].F == a[i].S+a[j].S);
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}
