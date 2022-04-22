#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;

void solve(){
	int n, m;
	cin>>n>>m;
	int a[n];
	unordered_map<int, bool> mp;
	for(int i=0; i<n; i++)
		cin>>a[i];
	for(int i=0; i<m; i++){
		int k;
		cin>>k;
		mp[k-1] = 1;
	}
	while(!is_sorted(a, a+n)){
		for(int i=0; i<n-1; i++){
			if(a[i] > a[i+1]){
				if(mp[i])
					swap(a[i], a[i+1]);
				else{
					cout<<"NO\n";
					return;
				}
			}
		}
	}
	cout<<"YES\n";
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}