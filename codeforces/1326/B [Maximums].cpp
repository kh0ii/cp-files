// Problem: B. Maximums
// Contest: Codeforces - Codeforces Global Round 7
// Memory Limit: 256 MB
// Time Limit: 1000 ms

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
	int n;
	cin>>n;
	vi b(n);
	FOR(i, n) cin>>b[i];
	cout<<b[0]<<' ';
	int k=0;
	for(int i=0; i<n-1; i++){
		k = max(k, b[i]);
		b[i+1] += k;
		cout<<b[i+1]<<' ';
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
