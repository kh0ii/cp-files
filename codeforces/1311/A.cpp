#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;

void solve(){
	int a, b;
	cin>>a>>b;
	if(a == b) cout<<0<<'\n';
	else if(b%2 != a%2){
		if(a < b) cout<<1<<'\n';
		else cout<<2<<'\n';
	}
	else{
		if(a > b) cout<<1<<'\n';
		else cout<<2<<'\n';
	}
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}