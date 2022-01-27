// problem: B. Squares and Cubes
// author: kh0i
// created: 20.12.2021 21:37:47

// When TL is tight
//#pragma GCC optimize("O2,unroll-loops")  // O3 might not work
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#include "bits/stdc++.h"
using namespace std;
#define int long long
const int inf = 2e9, mod = 1e9+7; //998244353;
int n;
void solve(){
	cin >> n;
	int cnt = 0;
	unordered_map<int,bool> mp;
	for(int i=1; i*i <= n; i++){
		if(mp[i*i] == false)
			++cnt;	
		mp[i*i] = true;
	}
	for(int i=2; i*i*i<=n; i++){
		if(mp[i*i*i] == false)
			++cnt;	
		mp[i*i*i] = true;
	}
	cout << cnt << '\n';
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
