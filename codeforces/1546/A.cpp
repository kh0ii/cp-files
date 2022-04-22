// Problem: A. AquaMoon and Two Arrays
// URL: https://codeforces.com/contest/1546/problem/A
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
int n, a[104], b[104];
void solve(){
	int sa = 0, sb = 0;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
		sa += a[i];
	}
	for(int i=0; i<n; i++){
		cin>>b[i];
		sb += b[i];
	}
	if(sa != sb){
		cout<<-1<<'\n';
		return;
	}
	vector<pair<int, int>> ans;
	for(int i=0; i<n; i++){
		if(a[i] != b[i]){
			for(int j=i+1; j<n and a[i] != b[i]; j++){
				if(a[j] > b[j] and a[i] < b[i]){
					int d = min(a[j] - b[j], b[i] - a[i]);
					a[i] += d;
					a[j] -= d;
					for(int k=0; k<d; k++)
						ans.push_back({j+1, i+1});
				}
				else if(a[j] < b[j] and a[i] > b[i]){
					int d = min(b[j] - a[j], a[i] - b[i]);
					a[i] -= d;
					a[j] += d;
					for(int k=0; k<d; k++)
						ans.push_back({i+1, j+1});
				}
			}
		}
	}
	cout<<ans.size()<<'\n';
	for(auto i : ans)
		cout<<i.first<<' '<<i.second<<'\n';		
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    // setIO()
    int t; cin>>t; while(t--)
    solve();
    return 0;
}