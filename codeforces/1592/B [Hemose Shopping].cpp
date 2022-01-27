#include "bits/stdc++.h"
using namespace std;

#define V vector
#define ll long long
#define pb emplace_back
#define F first
#define S second
#define sz(x) (int)(x.size())
#define all(x) (x).begin(), (x).end()

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

int32_t main() {
    setIO();  
    int t, n, x; cin>>t;
    while(t--){
        cin>>n>>x;
        bool flag = true;
        V<int> a(n);
        for(int i=0; i<n; i++) cin>>a[i];
        //if(x*2 <= n) cout<<"YES\n";
        V<int> tmp(all(a)); sort(all(tmp));
        for(int i = n-x; i<x; i++) flag &= a[i] == tmp[i];
        cout<<(flag ? "YES\n" : "NO\n");   
    }
    return 0;
}


