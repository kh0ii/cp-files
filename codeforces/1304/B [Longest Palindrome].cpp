// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int(x.size())

int main() {
	int n, m; cin>>n>>m;
	string s[n];
	for(int i=0; i<n; i++) cin>>s[i];
	vector<pair<string, string>> concen;
	bool check[n] {false};
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			string k = s[j]; reverse(all(k));
			if(s[i] == k and !check[i] and !check[j]){
				concen.push_back({s[i], s[j]});
				check[i] = 1; check[j] = 1;
			}
		}
	}
	string opcon;
	for(int i=0; i<n; i++){
		if(!check[i]){
			string k = s[i]; reverse(all(k));
			if(k==s[i]){
				opcon = s[i]; break;
			}
		}
	}
	cout<<sz(concen)*2*m + sz(opcon)<<'\n';
	for(int i=0; i<sz(concen); i++) cout<<concen[i].first;
	cout<<opcon;
	for(int i=sz(concen)-1; i>=0; i--) cout<<concen[i].second;
	return 0;
}
