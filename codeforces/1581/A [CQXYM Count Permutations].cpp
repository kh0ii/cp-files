/**
 *    author: kh0i
 *    created: 30.09.2021 17:04:26
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

#define MOD 1000000007

void solve(){
	ll n, res=1; cin>>n;
	for(ll i=3; i<=2*n; i++){
		res *= (i%MOD);
		res%=MOD;
	}
	cout<<res<<"\n";
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    /*freopen("*.inp", "r", stdin);
    freopen("*.out", "w", stdout);*/
    int t; cin>>t; while(t--)
    solve();
    return 0;
}