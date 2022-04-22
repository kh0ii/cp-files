// Problem: B. AquaMoon and Stolen String
// URL: https://codeforces.com/contest/1546/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include "bits/stdc++.h"
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

void setIO(string s) {
    freopen((s+".inp").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}
int n, m;
void solve(){
	cin>>n>>m;
	string a[n*2-1];
	for(int i=0; i<2*n-1; i++)
		cin>>a[i];
	for(int i=0; i<m; i++){
		unordered_map<char, int> mp;
		for(int j=0; j<2*n-1; j++)
			mp[a[j][i]]++;
		for(auto k : mp){
			if(k.second & 1){
				cout<<k.first;
				break;
			}
		}
	}
	cout<<'\n';
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    // setIO()
    int t; cin>>t; while(t--)
    solve();
    return 0;
}