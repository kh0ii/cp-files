// Problem: B1. Wonderful Coloring - 1
// Contest: Codeforces - Codeforces Round #734 (Div. 3)
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
	string s;
	cin>>s;
	string t;
	FOR(i, sz(s)){
		if(count(all(t), s[i])<2){
			t+=s[i];
		}
	}
	if(sz(t)%2==1) cout<<(sz(t)-1)/2;
	else cout<<sz(t)/2;
	cout<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
