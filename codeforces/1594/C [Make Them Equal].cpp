/**
 *    author: kh0i
 *    created: 08.10.2021 22:21:53
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

int sieve[300001] = {0};
void fillsieve(){
    sieve[0] = 1; sieve[1] = 1;
    for(int i=2; i<300001; i++){
        if(sieve[i]==0){
            for(int j=i*2; j<300001; j+=i) sieve[j] = 1;
        }
    }
}

int32_t main() {
    setIO();  
    int t, n; cin>>t;
    char c; string s;
    bool flag;
    fillsieve();
    while(t--){
        flag = true;
        cin>>n>>c>>s;
        vector<int> ans;
        for(int i=0; i<n; i++){
            if(s[i]!=c) flag = false;
        }       
        if(!flag){
            for(int i=1; i<n+1; i++){
                flag = true;
                for(int j=i; j<n+1; j++){
                    flag &= (s[j-1]==c);
                    j+=i-1;
                }
                if(flag){
                    ans.pb(i); break;
                }
            }
            if(!flag){
                ans.pb(n); ans.pb(n-1);
            }
        }
        cout<<sz(ans)<<'\n';
        for(auto &k : ans) cout<<k<<" ";
        cout<<'\n';
    }
    return 0;
}
