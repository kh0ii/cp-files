// problem: B. Triangles on a Rectangle
// author: kh0i
// created: 18.12.2021 22:54:51

// When TL is tight
//#pragma GCC optimize("O2,unroll-loops")  // O3 might not work
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#include "bits/stdc++.h"
using namespace std;
#define int long long
const int inf = 2e9, mod = 1e9+7; //998244353;

void solve(){
	int w, h, k;
	cin>>w>>h;
	int d = 4, ans = 0, x;
	while(d--){
		cin>>k;
		int mx = -inf, mn = inf;
		for(int i=0; i<k; i++){
			cin>>x;
			mx = max(mx, x);
			mn = min(mn, x);
		}
		cerr << mx << ' ' << mn << '\n';
		if(d == 3 or d == 2) ans = max(ans, (mx - mn) * h);
		else ans = max(ans, (mx - mn ) * w);
	}
	cerr << "=======\n";
	cout<<ans<<'\n';	
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
