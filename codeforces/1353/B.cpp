// Problem: B. Two Arrays And Swaps
// Contest: Codeforces - Codeforces Round #642 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1353/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
typedef vector<int> VI;

void solve(){
	int n, k;
	cin>>n>>k;
	int a[n], b[n];
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; i++) cin>>b[i];
	sort(a, a+n);
	sort(b, b+n);
	for(int i=0; i<n; i++){
		if(k==0) break;
		if(a[i]<b[n-1-i]){
			swap(a[i], b[n-1-i]);
			k--;
		}
	}
	int ans=0;
	for(int i=0; i<n; i++) ans+=a[i];
	cout<<ans<<'\n';
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}
