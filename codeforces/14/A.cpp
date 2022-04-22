// Problem: A. Letter
// Contest: Codeforces - Codeforces Beta Round #14 (Div. 2)
// Memory Limit: 64 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define MOD 1000000007

#define pb push_back
#define pf push_front
#define vi vector<int>
#define sz(x) (int((x).size()))
#define bg(x) begin(x)
#define all(x) (x).begin(), (x).end()
#define rall(x) x.rbegin(), x.rend() 
#define sor(x) sort(all(x)) 

#define each(a,x) for (auto& a: x)
#define FOR(i, n) for(int i=0; i<n; i++)

void solve(){
	int n, m;
	cin>>n>>m;
	string s[n];
	int min_i=n, max_i=-1, min_j=m, max_j=-1;
	for(int i=0; i<n; i++){
		cin>>s[i];
		for(int j=0; j<m; j++){
			if(s[i][j]=='*'){
				min_i = min(min_i, i);
				max_i = max(max_i, i);
				min_j = min(min_j, j);
				max_j = max(max_j, j);
			}
		}
	}
	for(int i=min_i; i<=max_i; i++){
		for(int j=min_j; j<=max_j; j++) cout<<s[i][j];
		cout<<'\n';
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
