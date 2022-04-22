/**
	author: kh0i
	created: 28.09.2021 10:49:39
**/
#include "bits/stdc++.h"
#define ll long long
#define sz(x) (int)(x.size())
#define all(x) (x).begin(), (x).end()
#define trace(x) cerr << #x << " = " << x << '\n'

using namespace std;

void solve(){
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	sort(a, a+n);
	for(int i=0; i<n-2; i++){
		if(a[i]+a[i+1]>a[i+2]){
			cout<<"YES"; return;
		}
	}
	cout<<"NO";
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    /*freopen("*.inp", "r", stdin);
    freopen("*.out", "w", stdout);*/
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
