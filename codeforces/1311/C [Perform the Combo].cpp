#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7, maxn = 1e5 * 2 + 3;

void solve(){
	string s;
	int n, m, p;
	cin>>n>>m;
	cin>>s;
	map<int, int> mp;
	int pref[n+1][26];
	memset(pref, 0, sizeof(pref));
	for(int i=1; i<=n; i++){
		for(int j=0; j<26; j++){
			pref[i][j] = pref[i-1][j];
		}
		pref[i][s[i-1]-'a']++;
	}
	for(int i=0; i<=m; i++){
		if(i<m) cin>>p;
		else p = n;
		for(int j=0; j<26; j++){
			mp[j] += pref[p][j];
		}
	}
	for(int i=0; i<26; i++){
		cout<<mp[i]<<' ';
	}
	cout<<'\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}