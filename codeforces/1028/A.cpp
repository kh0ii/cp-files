// Problem: A. Find Square
// Contest: Codeforces - AIM Tech Round 5 (rated, Div. 1 + Div. 2)
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

#define nl '\n'

#define each(a,x) for (auto& a: x)
#define FOR(i, n) for(int i=0; i<n; i++)

void getcenter(string s[], int i, int j, int n){
	int side=0, tmp=i;
	while(true){
		if(s[tmp][j]!='B') break;
		if(s[tmp][j]=='B') side++;
		tmp++;
		if(tmp==n) break;
	}
	int k = (side+1)/2;
	cout<<i+k<<" "<<j+k;
}

void solve(){
	int n, m;
	cin>>n>>m;
	string s[n];
	FOR(i, n) cin>>s[i];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(s[i][j]=='B'){
				getcenter(s, i, j, n);
				return;
			}
		}
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
