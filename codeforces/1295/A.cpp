/**
	author: kh0i
	created: 28.09.2021 10:11:11
**/
#include "bits/stdc++.h"
#define ll long long
#define sz(x) (int)(x.size())
#define all(x) (x).begin(), (x).end()
#define trace(x) cerr << #x << " = " << x << '\n'

using namespace std;

void solve(){
	int n; cin>>n;
	string ans;
	while(n>1){
		ans+='1'; n-=2;
	}
	if(n==1) ans[0] = '7';
	cout<<ans<<'\n';
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    /*freopen("*.inp", "r", stdin);
    freopen("*.out", "w", stdout);*/
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
