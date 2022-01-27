/**
 *    author: kh0i
 *    created: 30.09.2021 18:29:18
**/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define mp make_pair
#define F first
#define S second

#define sz(x) (int)(x.size())
#define all(x) (x).begin(), (x).end()
#define trace(x) cerr << #x << " = " << x << '\n'

void debug_out() { cerr << endl; }

template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
  cerr<<" "<<H;
  debug_out(T...);
}
 
#ifdef LOCAL
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) 42
#endif

void solve(){
    ll n, m, k; cin>>n>>m>>k;
    ll d = (n*(n-1))/2;
    if(m>d or m<n-1) {
        cout<<"NO\n";
        return;
    }
    if(m==0) {
        cout<<(k>1 and n==1 ? "YES\n" : "NO\n");
        return;
    }
    if(m==d or m==1){
        cout<<(k>2 ? "YES\n" : "NO\n");
        return;
    }
    cout<<(k>3 ? "YES\n" : "NO\n");
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    /*freopen("*.inp", "r", stdin);
    freopen("*.out", "w", stdout);*/
    int t; cin>>t; while(t--)
    solve();
    return 0;
}