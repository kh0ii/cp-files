#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;

void solve(){
	int n;
	cin>>n;
	string a[n], ans;
	for(int i=0; i<n-2; i++){
		cin>>a[i];
	}
	ans += a[0];
	for(int i=1; i<n-2; i++){
		if(a[i][0] != a[i-1][1]){
			ans += a[i][0];
		}
		ans += a[i][1];
	}
	while(ans.size() < n){
		ans.push_back('a');
	}
	cout<<ans<<'\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    	solve();
    return 0;
}