#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
int n, a[200005];

void solve(){
	cin>>n;
	map<int, int> mp;
	unordered_map<int, int> mp2;
	for(int i=0; i<n; i++){
		cin>>a[i];
		mp[a[i]]++;
		mp2[a[i]] = i;
	}
	for(auto k : mp){
		if(k.second == 1){
			cout<<mp2[k.first]+1<<'\n';
			return;
		}
	}
	cout<<-1<<'\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    	solve();
    return 0;
}