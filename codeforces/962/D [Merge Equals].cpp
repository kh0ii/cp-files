// problem: D. Merge Equals
// author: kh0i
// created: 18.12.2021 15:49:45

// When TL is tight
//#pragma GCC optimize("O2,unroll-loops")  // O3 might not work
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#include "bits/stdc++.h"
using namespace std;
#define int long long
const int inf = 2e9, mod = 1e9+7; //998244353;
int n, a[150004];
bool ck[150004];
unordered_map<int, int> mp;
vector<int> ans;

void solve(){
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	for(int i=1; i<=n; i++){
		while(mp[a[i]] != 0){
			a[mp[a[i]]] = 0;
			mp[a[i]] = 0;
			a[i] = a[i] * 2;
		}
		mp[a[i]] = i;
	}
	for(int i=1; i<=n; i++){
		if(a[i] != 0)
			ans.emplace_back(a[i]);
	}
	cout<<ans.size()<<'\n';
	for(int i : ans)
		cout<<i<<' ';
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
