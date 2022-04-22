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
    int t; cin>>t;
    string s;
    while(t--){
        cin>>s;
        int a = 0, b = 0;
        for(int i=0; i<sz(s)-1; i++){
            if(s[i]=='a' and s[i+1]=='b') a++;
            else if(s[i]=='b' and s[i+1]=='a') b++;
        }
        if(a!=b){
            s[0] = s[sz(s)-1];
        }
        cout<<s<<'\n';
    }
    return 0;
}


