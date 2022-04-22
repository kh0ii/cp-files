// Problem: A. Second-Price Auction
// Contest: Codeforces - Testing Round #9
// Memory Limit: 256 MB
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
	int n;
	cin>>n;
	int a[n], b[n];
	int best=0, index=0;
	FOR(i, n){
		cin>>a[i];
		b[i] = a[i];
		if(a[i]>best){
			best = a[i];
			index = i+1;
		}
	}
	sort(b, b+n);
	cout<<index<<' '<<b[n-2]; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
