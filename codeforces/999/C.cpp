/**
	author: kh0i
	created: 28.09.2021 09:45:08
**/
#include "bits/stdc++.h"
#define ll long long
#define sz(x) (int)(x.size())
#define all(x) (x).begin(), (x).end()
#define trace(x) cerr << #x << " = " << x << '\n'

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.second<b.second) return true;
	return false;
}

void solve(){
	int n, k; cin>>n>>k;
	pair<char, int> c[n];
	string s; cin>>s;
	for(int i=0; i<n; i++) c[i] = make_pair(s[i], i);
	sort(c, c+n);
	sort(c+k, c+n, cmp);
	for(int i=k; i<n; i++) cout<<c[i].first;
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    /*freopen("*.inp", "r", stdin);
    freopen("*.out", "w", stdout);*/
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}