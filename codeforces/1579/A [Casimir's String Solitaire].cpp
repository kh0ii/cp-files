/**
 *    author: kh0i
 *    created: 28.09.2021 21:35:11
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
	string s; cin>>s;
	int a(0), b(0), c(0);
	for(int i=0; i<sz(s); i++){
		if(s[i]=='A') a++;
		else if(s[i]=='B') b++;
		else c++;
	}
	if(c+a==b) cout<<"YES\n";
	else cout<<"NO\n";
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    /*freopen("*.inp", "r", stdin);
    freopen("*.out", "w", stdout);*/
    int t; cin>>t; while(t--)
    solve();
    return 0;
}