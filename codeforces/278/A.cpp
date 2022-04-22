// Problem: A. Circle Line
// Contest: Codeforces - Codeforces Round #170 (Div. 2)
// Memory Limit: 256 MB
// Time Limit: 2000 ms

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
	int n, s, t;
	cin>>n;
	int a[n];
	FOR(i, n) cin>>a[i];
	cin>>s>>t;
	if(s==t){
		cout<<0;
		return;
	}
	int r1=0, r2=0;
	if(s<t){
		for(int i=s-1; i<t-1; i++) r1+=a[i];
		for(int i=t-1; i<n; i++) r2+=a[i];
		for(int i=0; i<s-1; i++) r2+=a[i];
	}
	else if(s>t) {
		for(int i=s-2; i>=t-1; i--) r1+=a[i];
		for(int i=0; i<t-1; i++) r2+=a[i];
		for(int i=s-1; i<n; i++) r2+=a[i];
	}
	cerr<<r1<<' '<<r2<<'\n';
	cout<<min(r1, r2);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
