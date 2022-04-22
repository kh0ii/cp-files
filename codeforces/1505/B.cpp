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

int bruh(int n){
    if(n<10) return n;
    int res=0;
    while(n>0){
        res+=n%10;
        n/=10;
    }
    return bruh(res);
}

int32_t main() {
    setIO();  
    int n; cin>>n;
    cout<<bruh(n);
    return 0;
}

