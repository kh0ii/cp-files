// Problem: A. Friends Meeting
// Contest: Codeforces - Codeforces Round #468 (Div. 2, based on Technocup 2018 Final Round)
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
	int x, y;
	cin>>x>>y;
	if(x>y) swap(x, y);
	int ans=0, tx=1, ty=1;
	while(x!=y){
		if(abs(x-y)==1){
			ans+=min(tx, ty);
			cout<<ans;
			return;
		}
		x++;
		y--;
		ans+=tx;
		ans+=ty;
		tx++;
		ty++;
	}
	cout<<ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
