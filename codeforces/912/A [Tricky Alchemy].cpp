// Problem: A. Tricky Alchemy
// Contest: Codeforces - Codeforces Round #456 (Div. 2)
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
	ll a, b, x, y, z;
	cin>>a>>b>>x>>y>>z;
	ll totala=x*2+y, totalb=z*3+y;
	ll ans=0;
	if(totala>a) ans+=abs(totala-a);
	if(totalb>b) ans+=abs(totalb-b);
	cout<<abs(ans);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
