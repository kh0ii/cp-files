/**
 *    author: kh0i
 *    created: 28.09.2021 11:45:35
**/
#include "bits/stdc++.h"
#define ll long long
#define sz(x) (int)(x.size())
#define all(x) (x).begin(), (x).end()
#define trace(x) cerr << #x << " = " << x << '\n'

using namespace std;

void solve(){
	int n; cin>>n;
	int j; set<int> k;
	for(int i=0; i<n; i++){
		cin>>j; k.insert(j);
	}
	cout<<sz(k)<<'\n';
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    /*freopen("*.inp", "r", stdin);
    freopen("*.out", "w", stdout);*/
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
