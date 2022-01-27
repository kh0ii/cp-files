// Problem: B. Young Photographer
// Contest: Codeforces - Codeforces Beta Round #14 (Div. 2)
// Memory Limit: 64 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

// Data types and numbers
#define ll long long 
#define MOD 1000000007

// Vector
#define pb push_back
#define pf push_front

#define vi vector<int>
#define vii vector<vi>
#define vs vector<string>
#define vb vector<bool>

#define sz(x) (int((x).size()))
#define bg(x) begin(x)
#define all(x) (x).begin(), (x).end()
#define rall(x) x.rbegin(), x.rend() 
#define sor(x) sort(all(x)) 
// Loops
#define each(a,x) for (auto& a: x)
#define FOR(i, n) for(int i=0; i<n; i++)

void solve(){
	int n, pos;
	cin>>n>>pos;
	int x, y, u=0, l=1001;
	vi a(1001, 0);
	FOR(i, n){
		cin>>x>>y;
		u = max(u, max(x, y));
		l = min(l, min(x, y));
		for(int i=min(x, y); i<=max(x, y); i++) a[i]++;
	}
	int ans = -1, move;
	for(int i=l; i<=u; i++){
		if(a[i] == n){
			move = abs(pos - i);
			if(ans == -1) ans = move;
			else ans = min(ans, move);
		}
	}
	cout<<ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
