// Problem: A. Prime Subtraction
// Contest: Codeforces - Educational Codeforces Round 74 (Rated for Div. 2)
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
	ll x, y;
	cin>>x>>y;
	if(abs(x-y)==1) cout<<"NO\n";
	else cout<<"YES\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
