/**
 *    author: kh0i
 *    created: 28.09.2021 17:50:42
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
	ll n; cin>>n;
	ll a[n], b[n+1], c[n+1];
	for(ll i=0; i<n; i++) cin>>a[i];

	b[0] = 0ll;
	for(ll i=1; i<n+1; i++) b[i] = a[i-1] + b[i-1];

	sort(a, a+n); c[0] = 0ll;
	for(ll i=1; i<n+1; i++) c[i] = a[i-1] + c[i-1];
	
	ll q; cin>>q;
	while(q--){
		ll type, l, r; cin>>type>>l>>r;
		if(type==1) cout<<b[r] - b[l-1];
		else cout<<c[r] - c[l-1];
		cout<<endl;
	}
	// for(int i=0; i<n; i++) debug(b[i]);
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    /*freopen("*.inp", "r", stdin);
    freopen("*.out", "w", stdout);*/
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}