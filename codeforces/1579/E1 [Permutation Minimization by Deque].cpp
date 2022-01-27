/**
 *    author: kh0i
 *    created: 28.09.2021 23:24:30
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

int a[200005];

void solve(){
	int n; cin>>n;
	for(int i=0; i<n; i++) cin>>a[i];
	deque<int> ans;
	ans.push_back(a[0]);
	for(int i=1; i<n; i++){
		if(ans.front()>=a[i]) ans.push_front(a[i]);
		else ans.push_back(a[i]);
	}
	for(auto &k : ans) cout<<k<<' ';
	cout<<'\n';
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    /*freopen("*.inp", "r", stdin);
    freopen("*.out", "w", stdout);*/
    int t; cin>>t; while(t--)
    solve();
    return 0;
}