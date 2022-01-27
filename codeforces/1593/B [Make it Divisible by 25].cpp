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
//#define int long long    // Int overflow

int32_t main() {
    setIO();  
    int t; cin>>t;
    ll n;
    while(t--){
        cin>>n;
        if(n%25==0){
            cout<<0<<'\n';
            continue;
        }
        int ans = INF;
        ll k;
        int cnt = 0, temp;
        while(n>0){
            k = n;
            if(k%10==0){
                k/=10;
                temp = cnt;
                while(k>0){
                    if(k%10==0 or k%10==5){
                        ans = min(ans, temp);
                        break;
                    }
                    temp++; k/=10;
                }
            }
            k = n;
            if(k%10==5){
                k/=10;
                temp = cnt;
                while(k>0){
                    if(k%10==7 or k%10==2){
                        ans = min(ans, temp);
                        break;
                    } 
                    temp++; k/=10;
                }
            }
            cnt++; n/=10;
        }
        cout<<ans<<'\n';
    }
    return 0;
}


