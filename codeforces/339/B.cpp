// Problem: B. Xenia and Ringroad
// Contest: Codeforces - Codeforces Round #197 (Div. 2)
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define vi vector<int>
#define FOR(i, n) for(int i=0; i<n; i++)
#define MOD 1000000007
#define sz(x) (int((x).size()))
#define ll long long
#define all(n) (n).begin(), (n).end()

void solve(){
	ll n, m;
	cin>>n>>m;
	ll res=0;
	ll a[m];
	FOR(i, m) cin>>a[i];
	res+=a[0]-1;
	for(int i=1; i<m; i++){
		if(a[i]>=a[i-1]) res+=a[i]-a[i-1];
		else if(a[i]<a[i-1]) res+=n-a[i-1]+a[i];
	}
	cout<<res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
