/**
 *    author: kh0i
 *    created: 29.09.2021 14:21:06
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
	int x, y, z;
	cin>>x>>y>>z;
	if(x==y){
		if(z==0) cout<<'0';
		else cout<<'?';
		return;
	}
	if(abs(x-y)>z) cout<<(x>=y ? (x==y ? '0' : '+') : '-');
	else cout<<'?';
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    /*freopen("*.inp", "r", stdin);
    freopen("*.out", "w", stdout);*/
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}